
import wolframalpha
from wolframclient.evaluation import WolframLanguageSession
from wolframclient.language import wl, wlexpr

session = WolframLanguageSession("/opt/Wolfram/WolframEngine/12.0/SystemFiles/Kernel/Binaries/Linux-ARM/WolframKernal")
print(session.evaluate(wl.WolframAlpha("number of moons of Saturn", "Result")))