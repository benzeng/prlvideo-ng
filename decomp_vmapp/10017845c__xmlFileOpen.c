
void * _xmlFileOpen(char *filename)

{
  long lVar1;
  undefined8 local_10;
  
  lVar1 = _xmlURIUnescapeString(filename,0,0);
  if (lVar1 == 0) {
    local_10 = (void *)FUN_100178350(filename);
  }
  else {
    local_10 = (void *)FUN_100178350(lVar1);
    (*(code *)_xmlFree)(lVar1);
  }
  return local_10;
}

