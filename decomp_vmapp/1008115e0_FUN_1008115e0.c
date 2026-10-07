
long FUN_1008115e0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x170) != param_2) {
    lVar1 = *(long *)(param_1 + 0x100);
    if (param_2 == 0) {
      param_2 = *(long *)(param_1 + 0x270);
    }
    lVar4 = FUN_100811e30(*(undefined8 *)(param_2 + 0x130));
    *(long *)(param_1 + 0x100) = lVar4;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar1 + 0x70);
      *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
      *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
      *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar1 + 0xe8);
      *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(lVar1 + 0x100);
      *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar1 + 0x118);
      FUN_1008121f0(lVar1);
    }
    if (0x20 < *(uint *)(param_1 + 0x108)) {
      FUN_10081d560("ssl_lib.c",0xb8e,"ssl->sid_ctx_length <= sizeof(ssl->sid_ctx)");
    }
    lVar1 = *(long *)(param_1 + 0x170);
    if ((lVar1 != 0) && (*(uint *)(param_1 + 0x108) == *(uint *)(lVar1 + 0x154))) {
      iVar3 = _memcmp((undefined8 *)(param_1 + 0x10c),(void *)(lVar1 + 0x158),
                      (ulong)*(uint *)(param_1 + 0x108));
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x154);
        *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x170);
        *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x168);
        uVar2 = *(undefined8 *)(param_2 + 0x158);
        *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x160);
        *(undefined8 *)(param_1 + 0x10c) = uVar2;
      }
    }
    FUN_10081d580(param_2 + 0x94,1,0xc,"ssl_lib.c",0xb9d);
    if (*(long *)(param_1 + 0x170) != 0) {
      FUN_10080e050();
    }
    *(long *)(param_1 + 0x170) = param_2;
  }
  return param_2;
}

