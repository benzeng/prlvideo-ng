
long FUN_100be6290(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  lVar2 = *(long *)(param_1 + 0x100);
  if ((uVar1 & 2) != 0) {
    lVar3 = *(long *)(lVar2 + 0x98);
    lVar4 = 2;
    if (lVar3 != 0) goto LAB_100be62ec;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x40) == 0) goto LAB_100be6304;
    lVar3 = *(long *)(lVar2 + 0xe0);
    lVar4 = 5;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x80);
    lVar4 = 1;
    if (lVar3 != 0) goto LAB_100be62ec;
    lVar3 = *(long *)(lVar2 + 0x68);
    lVar4 = 0;
  }
  if (lVar3 == 0) {
LAB_100be6304:
    FUN_100c62ee0(0x14,0xb7,0x44,"ssl_lib.c",0x96a);
    return 0;
  }
LAB_100be62ec:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar2 + 0x70 + lVar4 * 0x18);
    lVar3 = *(long *)(lVar2 + 0x68 + lVar4 * 0x18);
  }
  return lVar3;
}

