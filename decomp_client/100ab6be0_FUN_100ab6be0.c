
undefined8 FUN_100ab6be0(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 local_30 [4];
  int local_2c;
  
  (**(code **)(*param_2 + 0x18))(param_2,local_30);
  uVar4 = 0;
  do {
    local_2c = 0;
    cVar1 = (**(code **)(**(long **)(*param_1 + 0x10) + 0x10))
                      (*(long **)(*param_1 + 0x10),local_30 + uVar4,4 - (int)uVar4,&local_2c);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar3 = (int)uVar4 + local_2c;
    uVar4 = (ulong)uVar3;
  } while (uVar3 < 4);
  uVar2 = FUN_100ab6b00(param_1,param_2);
  return uVar2;
}

