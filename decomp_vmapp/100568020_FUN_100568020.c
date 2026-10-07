
void FUN_100568020(long *param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') break;
    (**(code **)(*param_1 + 0x110))(param_1,0xffffffff);
  }
  return;
}

