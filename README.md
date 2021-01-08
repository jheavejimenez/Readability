# Readability
# program that computes the approximate grade level needed to comprehend some text, per the below.

# Reading Levels
According to [Scholastic](https://www.scholastic.com/teachers/teaching-tools/collections/guided-reading-book-lists-for-every-level.html), E.B. White’s “Charlotte’s Web” is between a second and fourth grade reading level, and Lois Lowry’s “The Giver” is between an eighth grade reading level and a twelfth grade reading level. What does it mean, though, for a book to be at a “fourth grade reading level”?

Well, in many cases, a human expert might read a book and make a decision on the grade for which they think the book is most appropriate. But you could also imagine an algorithm attempting to figure out what the reading level of a text is.

So what sorts of traits are characteristic of higher reading levels? Well, longer words probably correlate with higher reading levels. Likewise, longer sentences probably correlate with higher reading levels, too. A number of “readability tests” have been developed over the years, to give a formulaic process for computing the reading level of a text.

One such readability test is the [Coleman-Liau index. The Coleman-Liau index](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index#:~:text=The%20Coleman%E2%80%93Liau%20index%20is,necessary%20to%20comprehend%20the%20text.) of a text is designed to output what (U.S.) grade level is needed to understand the text. The formula is:
```
index = 0.0588 * L - 0.296 * S - 15.8

```
Here, L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

# Example
```
$ ./readability
Text: Congratulations! You explore repositories.
      Give me a follow if you like what you see it's inspired me to push more in these repositories.
Grade 9

```
# Explanation
The text the user inputted has 137 letters, 3 sentences, and 23 words. 137 letters per 23 words is an average of about 595.65 letters per 100 words. And 3 sentences per 23 words is an average of about 13.04 sentences per 100 words. Plugged into the Coleman-Liau formula, and rounded to the nearest whole number, we get an answer of 9: so this passage is at a 9th grade reading level.
