// Checking for Overlap

// if (max(event.first, start) < min(event.second, end)) {:
// event.first: This is the start time of the current event in the list.
// event.second: This is the end time of the current event in the list.
// start: This is the start time of the new event we want to book.
// end: This is the end time of the new event we want to book.
// Using max and min

// max(event.first, start): This calculates the maximum of the two start times:

// If event.first is earlier (<) than start, it takes start.
// If start is earlier (>=) than event.first, it takes event.first.
// Essentially, it finds the later starting time of the two intervals.
// min(event.second, end): This calculates the minimum of the two end times:

// If event.second is later (>) than end, it takes end.
// If end is later (<=) than event.second, it takes event.second.
// Essentially, it finds the earlier ending time of the two intervals.
// Checking the Overlap Condition

// if (max(event.first, start) < min(event.second, end)):
// This condition checks if the latest start time (max(event.first, start)) of the two intervals is less than the earliest end time (min(event.second, end)) of the two intervals.
// If this condition is true, it means there is an overlap between the current event and the new event we want to book.
// If this condition is false, it means there is no overlap, and we can safely book the new event.
class MyCalendar {
public:
    MyCalendar() {
        
    }
//     An overlap between two intervals [start1, end1) and [start2, end2) occurs if there is any time period where both intervals share time:

// The overlap condition can be defined as:
// If max(start1, start2) < min(end1, end2), then the intervals overlap.

    vector<pair<int,int>>events;
    bool book(int start, int end) {
        for(auto& event :events){
            if(max(event.first,start)<min(event.second,end)){
                return false;

            }
        }
        events.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
