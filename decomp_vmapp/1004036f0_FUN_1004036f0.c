
void FUN_1004036f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (0x40 < *(ulong *)(param_1 + 0x130)) {
    *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) - 1;
    uVar2 = *(long *)(param_1 + 0x128) + 1;
    *(ulong *)(param_1 + 0x128) = uVar2;
    if (0x91 < uVar2) {
      operator_delete((void *)**(undefined8 **)(param_1 + 0x110));
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 8;
      *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + -0x49;
    }
  }
  LOCK();
  UNLOCK();
  lVar6 = DAT_1011bbce8 + 1;
  param_2[5] = DAT_1011bbce8;
  DAT_1011bbce8 = lVar6;
  lVar6 = *(long *)(param_1 + 0x110);
  lVar3 = *(long *)(param_1 + 0x118);
  lVar7 = 0;
  lVar4 = lVar3 - lVar6 >> 3;
  if (lVar4 != 0) {
    lVar7 = lVar4 * 0x49 + -1;
  }
  lVar4 = *(long *)(param_1 + 0x128);
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar7 - lVar4 == lVar5) {
    FUN_100403cb0();
    lVar5 = *(long *)(param_1 + 0x130);
    lVar4 = *(long *)(param_1 + 0x128);
    lVar6 = *(long *)(param_1 + 0x110);
    lVar3 = *(long *)(param_1 + 0x118);
  }
  puVar8 = (undefined8 *)0x0;
  if (lVar3 != lVar6) {
    puVar8 = (undefined8 *)
             (((ulong)(lVar5 + lVar4) % 0x49) * 0x38 +
             *(long *)(lVar6 + ((ulong)(lVar5 + lVar4) / 0x49) * 8));
  }
  puVar8[6] = param_2[6];
  puVar8[5] = param_2[5];
  puVar8[4] = param_2[4];
  puVar8[3] = param_2[3];
  puVar8[2] = param_2[2];
  uVar1 = *param_2;
  puVar8[1] = param_2[1];
  *puVar8 = uVar1;
  *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
  return;
}

