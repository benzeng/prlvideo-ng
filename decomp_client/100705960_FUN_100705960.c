
void FUN_100705960(long param_1,long param_2,char param_3)

{
  long lVar1;
  char cVar2;
  
  cVar2 = FUN_100708950(param_2,*(long *)(param_1 + 0x10) + 0x20);
  if (cVar2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    FUN_100707070(lVar1 + 0x20,param_2);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 8);
    FUN_100852c70(param_1,*(long *)(param_1 + 0x10) + 0x20);
    if (param_3 != '\0') {
      FUN_100704190(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

