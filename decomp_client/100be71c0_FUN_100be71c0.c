
undefined8 FUN_100be71c0(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x130);
    if (lVar2 != 0) {
      if ((param_2 != (char *)0x0) && (sVar1 = _strlen(param_2), 0x80 < sVar1)) {
        FUN_100c62ee0(0x14,0x111,0x92,"ssl_lib.c",0xc77);
        return 0;
      }
      if (*(long *)(lVar2 + 0x90) != 0) {
        FUN_100bf3910();
      }
      if (param_2 == (char *)0x0) {
        *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x90) = 0;
      }
      else {
        lVar2 = FUN_100c58250(param_2);
        *(long *)(*(long *)(param_1 + 0x130) + 0x90) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

