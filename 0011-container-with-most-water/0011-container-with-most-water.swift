class Solution {
    func maxArea(_ height: [Int]) -> Int {
        var n = height.count
        var left = 0
        var right = n-1
        var maxArea = 0
        while left < right {
            let h = min(height[left],height[right])
            let w = right - left
            var area = h * w
            maxArea = max(maxArea,area)
            if height[left] < height[right] {
                left += 1
            }
            else {
                right -= 1
            }
        }
        return maxArea
    }
}