impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut v: Vec<(i32, usize)> =
            nums.iter().enumerate().map(|(i, &n)| (n, i)).collect();

        v.sort_by_key(|x| x.0);
        let mut i: usize = 0;
        let mut j: usize = v.len() - 1;

        while i < j {
            let sum = v[i].0 + v[j].0;

            if sum == target {
                return vec![v[i].1 as i32, v[j].1 as i32];
            } else if sum > target {
                j -= 1;
            } else {
                i += 1;
            }
        }

        vec![]
    }
}
