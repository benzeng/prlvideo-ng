
int FUN_10060a350(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x30);
  pvVar4 = _malloc(uVar6);
  if (pvVar4 == (void *)0x0) {
    FUN_1008e3970("","vdisk",0,"No memory for node buffer");
    iVar3 = -0x7ffeffed;
  }
  else {
    ___bzero(pvVar4,uVar6);
    FUN_100607ac0(param_1 + 0x10,pvVar4);
    uVar5 = (ulong)*(ushort *)(param_1 + 0x112);
    _memcpy((void *)((long)pvVar4 + 0xf8),*(void **)(param_1 + 0x118),uVar5);
    *(ushort *)(uVar5 + 0xf8 + (long)pvVar4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 0x110),
                  (char)((ushort)*(undefined2 *)(param_1 + 0x110) >> 8));
    *(ushort *)(uVar5 + 0xfa + (long)pvVar4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 0x10e),
                  (char)((ushort)*(undefined2 *)(param_1 + 0x10e) >> 8));
    *(ushort *)(uVar5 + 0xfc + (long)pvVar4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 0x10c),
                  (char)((ushort)*(undefined2 *)(param_1 + 0x10c) >> 8));
    *(ushort *)(uVar5 + 0xfe + (long)pvVar4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 0x10a),
                  (char)((ushort)*(undefined2 *)(param_1 + 0x10a) >> 8));
    lVar2 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar2 + 0x48);
    uVar5 = (**(code **)(*param_2 + 0x2e0))(param_2);
    iVar3 = FUN_100603fb0(lVar2,param_2,((ulong)uVar1 * (ulong)param_3) / uVar5,pvVar4,uVar6);
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"Node writing failed");
    }
    _free(pvVar4);
  }
  return iVar3;
}

