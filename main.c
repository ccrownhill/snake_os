void main()
{
	char* VGA_MEMORY = (char*) (0xb8000);
	// TODO: WHY DO I HAVE TO ADD 1 TO INDECES? HOW CAN I STOP DOING IT?
	VGA_MEMORY[0] = 'H';
	VGA_MEMORY[1] = 0xf;
	VGA_MEMORY[2] = 'i';
	VGA_MEMORY[3] = 0xf;
	while(1);
}
