from fuzzywuzzy import fuzz
from statistics import mean
import alfonso_wordlists

def get_sim(Str1, Str2):
    Ratio = fuzz.ratio(Str1.lower(),Str2.lower())
    partial = fuzz.partial_ratio(Str1.lower(),Str2.lower())
    token_sort = fuzz.token_sort_ratio(Str1.lower(),Str2.lower())
    #print("token sort",token_sort)
    #print("partial",partial)
    #print("actual",Ratio)
    data = (token_sort, partial, Ratio)
    #print("average",mean(data),":",Str2)
    return mean(data)

def search_commands(in1):
    possible_commands_values = [1]
    possible_commands = ["NULL"]
    for x in alfonso_wordlists.FANOFF:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("FANOFF")
    for x in alfonso_wordlists.DOOROPEN:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("DOOROPEN")
    for x in alfonso_wordlists.DOORCLOSE:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("DOORCLOSE")
    for x in alfonso_wordlists.FANON:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("FANON")
    for x in alfonso_wordlists.PLAYMUSIC:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("PLAYMUSIC")
    for x in alfonso_wordlists.NEXTSONG:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("NEXTSONG")
    for x in alfonso_wordlists.UPVOLUME:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("UPVOLUME")
    for x in alfonso_wordlists.DOWNVOLUME:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("DOWNVOLUME")
    for x in alfonso_wordlists.BLINDSUP:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("BLINDSUP")
    for x in alfonso_wordlists.BLINDSDOWN:
        possible_commands_values.append(get_sim(in1,x))
        possible_commands.append("BLINDSDOWN")
    #print(possible_commands_values)
    #print(possible_commands)
    m = max(possible_commands_values)
    pos = [i for i, j in enumerate(possible_commands_values) if j == m]
    print(m)
    if m > 66:
        ans = possible_commands[pos[0]]
    else:
        ans = possible_commands[0]
    return ans
#print(search_commands("yo mama"))

