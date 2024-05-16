slownik = {"siema":"hello", "dom":"house", "nara": "goodbye"}

print ("podaj slowo po polsku, a ja je przetlumacze na angielski")

while True:
	slowo=input()
	if slowo in slownik:
		print(slowo,":",slownik[slowo])

	else:
		print ("Nie ma takiego slowa")

