
void FUN_10093aab2(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = FUN_100920c35(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28));
    if (lVar1 == 0) {
      FUN_10091d89f(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x40),"ref",
                    *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0x10,0);
    }
    else {
      *(long *)(param_1 + 0x60) = lVar1;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x50);
    }
  }
  return;
}

