void	show(char c, int i)
{
  int	x;

  x = 0;
  while (x < i)
    {
      write(1, &c, 1);
      x++;
    }
}

int	first_line(int size)
{
  int	i;
  int	star;
  int	jump;

  i = 1;
  star = 1;
  jump = 4;
  while(i < size)
    {
      if (i % 2 == 0)
	{
	  jump = jump + 2;
	}
      star = star + jump;
      i++;
    }
  return (star);
}

int	last_line(int size)
{
  int	i;
  int	star;
  int	jump;

  i = 1;
  star = 7;
  jump = 6;
  while (i < size)
    {
      if (i % 2 == 0)
	{
	  jump = jump + 2;
	}
      star = star + jump;
      i++;
    }
  return (star);
}

int	trunk(int size)
{
  int	i;
  int	stick;
  int	spaces;

  i = 0;
  stick = size;
  spaces = last_line(size) / 2;
  if (size % 2 == 0)
    {
      stick = size + 1;
    }
  spaces = spaces - (stick / 2);
  while (i < size)
    {
      show(' ', spaces);
      show('|', stick);
      show('\n', 1);
      i++;
    }
  return (stick);
}

void	sapin(int size)
{
  int	base;
  int	spaces;
  int	i;      
  int	star;

  i = 1;             
  if (size > 0)
    {
      while (i <= size)
	{
	  star = first_line(i);
	  spaces = (last_line(size) - first_line(i)) / 2;
	  while (star <= last_line(i))
	    {
	      show(' ', spaces);
	      show('*', star);
	      star = star + 2;
	      show('\n', 1);
	      spaces--;
	    }
	  i++;
	}
      trunk(size);
    }
}
