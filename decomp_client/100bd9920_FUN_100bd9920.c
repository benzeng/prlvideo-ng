
undefined8 FUN_100bd9920(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
  if ((((*(byte *)(lVar1 + 0x18) & 0xe0) != 0) || (uVar3 = 1, (*(byte *)(lVar1 + 0x20) & 0x40) != 0)
      ) && (uVar3 = 1, *(long *)(*(long *)(param_1 + 0x130) + 0x128) != 0)) {
    if (*(long *)(param_1 + 0x220) != 0) {
      FUN_100bf3910();
    }
    puVar2 = (undefined1 *)FUN_100bf3540(3,"t1_lib.c",0x71b);
    *(undefined1 **)(param_1 + 0x220) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_100c62ee0(0x14,0x11a,0x41,"t1_lib.c",0x71d);
      uVar3 = 0xffffffff;
    }
    else {
      *(undefined8 *)(param_1 + 0x218) = 3;
      *puVar2 = 0;
      *(undefined1 *)(*(long *)(param_1 + 0x220) + 1) = 1;
      *(undefined1 *)(*(long *)(param_1 + 0x220) + 2) = 2;
    }
  }
  return uVar3;
}

