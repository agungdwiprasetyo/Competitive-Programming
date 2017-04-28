def solve(pola, cek):
	dick = {}
	cekStr = cek.split(" ")
	j=0
	for i in pola:
		dick[i] = cekStr[j]
		j+=1
	print dick

"""
/asd/asd, usasd => gabung
/asd/adsa, .. => /asd
/asd/adsa, . => /asd/adsa
/asd/adsa, /dfdf/.././doc => /doc
/asd/adsa, /dfdf/./../doc => /doc
"""

def combinePath(root, path):
	cekRoot = root.split("/")
	cekPath = path.split("/")
	has = ""

	if cekPath[0]:
		res = cekRoot
	else:
		res = []

	for i in cekPath:
		if i == "..":
			res.pop()
		elif i!=".":
			res.append(i)

	for j in res:
		has = has+ j +"/"
	print has[:-1]

if __name__ == '__main__':
	# pol = raw_input()
	# setring = raw_input()
	pol = "/asd/asdsa"
	setring = "/haha/.././doc"
	combinePath(pol,setring)