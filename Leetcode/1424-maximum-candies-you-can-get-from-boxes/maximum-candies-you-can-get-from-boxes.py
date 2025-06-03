from collections import deque

class Solution:
    def maxCandies(self, status, candies, keys, containedBoxes, initialBoxes):
        queue = deque()
        found_boxes = set(initialBoxes)
        have_keys = set()
        opened_boxes = set()
        total_candies = 0
        for box in initialBoxes:
            if status[box] == 1:
                queue.append(box)

        while queue:
            box = queue.popleft()
            if box in opened_boxes:
                continue
            opened_boxes.add(box)
            total_candies += candies[box]

          
            for key in keys[box]:
                if key not in have_keys:
                    have_keys.add(key)
    
                    if key in found_boxes and key not in opened_boxes:
                        queue.append(key)

            for new_box in containedBoxes[box]:
                found_boxes.add(new_box)
                if status[new_box] == 1 or new_box in have_keys:
                    queue.append(new_box)

        return total_candies
