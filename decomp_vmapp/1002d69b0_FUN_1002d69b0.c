
undefined8 FUN_1002d69b0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)*(byte *)(param_2 + 2);
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] RegisterEndPoint: ep %02X",param_1 + 0x838,uVar8);
  }
  pvVar5 = *(void **)(param_1 + 0x40 + uVar8 * 8);
  if (pvVar5 != (void *)0x0) {
    FUN_1002d7cd0(pvVar5);
    operator_delete(pvVar5);
    *(undefined8 *)(param_1 + 0x40 + uVar8 * 8) = 0;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x70))();
    iVar2 = FUN_1002b7860(uVar4,param_1 + 0x20);
    if (iVar2 == 3) {
      if (DAT_1011c568c < 0) {
        return 0;
      }
      FUN_1008e3970("","USB",0,"[%s] Skip unsupported ISO/SS endpoint %02X",param_1 + 0x838,uVar8);
      return 0;
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x70))();
  lVar1 = *(long *)(param_1 + 0x30);
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (lVar1 != 0) {
    uVar7 = (ulong)*(ushort *)(lVar1 + 8);
    uVar6 = (ulong)*(ushort *)(lVar1 + 10);
  }
  uVar3 = FUN_1002b53c0(uVar4,uVar7,uVar6,uVar8);
  pvVar5 = operator_new(0x110);
  FUN_1002d7920(pvVar5,param_1,param_2,param_3,uVar3);
  *(void **)(param_1 + 0x40 + uVar8 * 8) = pvVar5;
  uVar4 = 1;
  if (*(int *)((long)pvVar5 + 0x100) == 0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Failed to init endpoint %02x",param_1 + 0x838,uVar8);
      pvVar5 = *(void **)(param_1 + 0x40 + uVar8 * 8);
    }
    if (pvVar5 != (void *)0x0) {
      FUN_1002d7cd0(pvVar5);
      operator_delete(pvVar5);
    }
    *(undefined8 *)(param_1 + 0x40 + uVar8 * 8) = 0;
    uVar4 = 0;
  }
  return uVar4;
}

