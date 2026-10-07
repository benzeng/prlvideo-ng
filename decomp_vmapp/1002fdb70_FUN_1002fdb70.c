
void FUN_1002fdb70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x868) != 0) {
    FUN_1002adb30(param_1);
    FUN_1002fd730(param_1);
    FUN_1002fa050(param_1);
    FUN_1002adb30(param_1,0);
    pvVar6 = operator_new(0x20);
    FUN_1002ff4a0(pvVar6,param_1);
    *(void **)(param_1 + 0x11920) = pvVar6;
    pvVar6 = operator_new(0x98);
    FUN_10032fc50(pvVar6,param_1);
    *(void **)(param_1 + 0x11928) = pvVar6;
  }
  FUN_1002adeb0(param_1);
  uVar7 = (ulong)*(uint *)(param_1 + 0x11968);
  while ((int)uVar7 != 0) {
    uVar5 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar5;
    *(uint *)(param_1 + 0x11968) = uVar5;
    lVar1 = *(long *)(param_1 + 0x11970);
    lVar8 = uVar7 * 0x10;
    if (*(long *)(lVar1 + 8 + lVar8) != 0) {
      FUN_1002a5f70();
      uVar7 = (ulong)*(uint *)(param_1 + 0x11968);
    }
    *(undefined8 *)(lVar1 + 8 + lVar8) = 0;
  }
  if (*(long *)(param_1 + 0x11970) != 0) {
    operator_delete__((void *)(*(long *)(param_1 + 0x11970) + -8));
  }
  *(undefined8 *)(param_1 + 0x11970) = 0;
  *(undefined4 *)(param_1 + 0x1196c) = 0;
  if (*(long **)(param_1 + 0x11928) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x11928) + 8))();
  }
  if (*(long **)(param_1 + 0x11920) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x11920) + 8))();
  }
  if (*(long *)(param_1 + 0x868) != 0) {
    FUN_1002adb30(param_1);
    (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,0);
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11908));
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1190c));
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11910));
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11914));
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11918));
    (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1191c));
    FUN_1002adb30(param_1,0);
  }
  lVar1 = *(long *)(param_1 + 72000);
  lVar8 = *(long *)(param_1 + 0x11948);
  lVar2 = *(long *)(param_1 + 0x11950);
  lVar3 = *(long *)(param_1 + 0x11958);
  lVar4 = *(long *)(param_1 + 0x11960);
  if (*(long *)(param_1 + 0x11938) != 0) {
    _CGLDestroyPixelFormat();
  }
  if (lVar1 != 0) {
    _CGLDestroyPixelFormat(lVar1);
  }
  if (lVar8 != 0) {
    _CGLDestroyPixelFormat(lVar8);
  }
  if (lVar2 != 0) {
    _CGLDestroyPixelFormat(lVar2);
  }
  if (lVar3 != 0) {
    _CGLDestroyPixelFormat(lVar3);
  }
  if (lVar4 != 0) {
    _CGLDestroyPixelFormat(lVar4);
    return;
  }
  return;
}

