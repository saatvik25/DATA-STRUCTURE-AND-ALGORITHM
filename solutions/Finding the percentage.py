


if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()
    average = ((float(student_marks[query_name][0]) + float(student_marks[query_name][1]) + float(student_marks[query_name][2])) / 3)
    print '%.2f' %(average)
