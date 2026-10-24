# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        self.res = []
        def getStarts(root, subRoot):
            if not root:
                return
            if root.val == subRoot.val:
                self.res.append(root)
            getStarts(root.left, subRoot)
            getStarts(root.right, subRoot)
        getStarts(root, subRoot)
        
        def bfs(p, q):
            if not p and not q:
                return True
            if not (p and q):
                return False
            if p.val != q.val:
                return False

            return bfs(p.left, q.left) and bfs(p.right, q.right)

        for s in self.res:
            if bfs(s, subRoot):
                return True
        return False 
       