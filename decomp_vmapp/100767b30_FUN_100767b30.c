
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_100767b30(long param_1,char *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint local_50;
  ulong local_48 [3];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = 0;
    FUN_1008e3970("","etrace",0,"Etrace is not initialized yet...");
  }
  else {
    local_48[2] = *(undefined8 *)(param_1 + 0x20);
    puVar2 = local_48 + 2;
    QIODevice::write(param_2,(longlong)puVar2);
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    QIODevice::write(param_2,(longlong)puVar2);
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    QIODevice::write(param_2,(longlong)puVar2);
    lVar8 = *(long *)(param_1 + 0x10);
    uVar9 = *(ulong *)(lVar8 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x1c);
    local_50 = 0;
    uVar5 = (ulong)*(uint *)(lVar8 + 8) % (ulong)uVar3;
    iVar4 = (int)uVar5;
    while( true ) {
      lVar7 = uVar5 * 0x10;
      uVar1 = *(ulong *)(lVar8 + 0x30 + lVar7) & 0xffffffffffff;
      if (uVar1 != 0) {
        QIODevice::write(param_2,lVar8 + 0x30 + lVar7);
        QIODevice::write(param_2,*(long *)(param_1 + 0x10) + 0x38 + lVar7);
        local_50 = local_50 + 1;
        uVar3 = *(uint *)(param_1 + 0x1c);
        uVar9 = uVar1 << 8;
      }
      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar3;
      if ((int)uVar5 == iVar4) break;
      lVar8 = *(long *)(param_1 + 0x10);
    }
    if (local_50 == uVar3) {
      local_48[0] = uVar9 >> 8 & 0xffffffffffff | 0xff00000000000000;
      local_48[1] = 0xff;
      QIODevice::write(param_2,(longlong)local_48);
      QIODevice::write(param_2,(longlong)(local_48 + 1));
      FUN_1008e3970("","etrace",0,"WARNING: eTrace buffer overlow detected!");
    }
    local_48[2] = 0;
    puVar2 = local_48 + 2;
    QIODevice::write(param_2,(longlong)puVar2);
    QIODevice::write(param_2,(longlong)puVar2);
    local_48[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    QIODevice::write(param_2,(longlong)puVar2);
    uVar6 = 1;
  }
  return uVar6;
}

