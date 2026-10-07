
void _xmlExpRef(xmlExpNodePtr expr)

{
  if (expr != (xmlExpNodePtr)0x0) {
    *(int *)(expr + 4) = *(int *)(expr + 4) + 1;
  }
  return;
}

