class ListNode {
    String val ;
    ListNode next ;
    ListNode prev ;

    ListNode() {}

    ListNode(String val){
        this.val = val ;
    }

    ListNode(String val , ListNode next) {
        this.val = val ;
        this.next = next ;
    }
    
    

    ListNode(String val , ListNode prev , ListNode next) {
        this.val = val ;
        this.next = next ;
        this.prev = prev ;
    }
}
class BrowserHistory {
    ListNode head ;

    public BrowserHistory(String homepage) {
        head = new ListNode(homepage) ;
    }
    
    public void visit(String url) {
        ListNode newNode = new ListNode(url) ;
        head.next = newNode ;
        newNode.prev = head ;
        head = head.next ;
    }
    
    public String back(int steps) {
        while(steps > 0){
            if(head.prev == null) break ;
            head = head.prev ;
            steps-- ;
        }
        return head.val ;
    }
    
    public String forward(int steps) {
        while(steps > 0){
            if(head.next == null)   break ;
            head = head.next ;
            steps-- ;
        }
        return head.val ;
    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */