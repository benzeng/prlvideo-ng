
void FUN_10018ef80(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  void *local_50;
  long local_48 [2];
  uint local_38;
  uint local_34;
  
  lVar2 = FUN_10010dec0(*(undefined8 *)(param_1 + 0x80));
  local_38 = param_2;
  local_34 = param_3;
  plVar1 = (long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    local_48[1] = 0;
    lVar2 = *(long *)(*plVar1 + 0x10);
    lVar5 = 0;
    if (*(long *)(*plVar1 + 0x10) != 0) {
      do {
        while( true ) {
          lVar6 = lVar2;
          uVar8 = *(uint *)(lVar6 + 0x18);
          if ((param_2 <= uVar8) && ((uVar8 != param_2 || (param_3 <= *(uint *)(lVar6 + 0x1c)))))
          break;
          lVar2 = *(long *)(lVar6 + 0x10);
          if (*(long *)(lVar6 + 0x10) == 0) {
            if (lVar5 == 0) goto LAB_10018f0d2;
            uVar8 = *(uint *)(lVar5 + 0x18);
            lVar6 = lVar5;
            goto LAB_10018f0c6;
          }
        }
        lVar2 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
      } while (*(long *)(lVar6 + 8) != 0);
LAB_10018f0c6:
      if ((uVar8 <= param_2) && ((uVar8 < param_2 || (*(uint *)(lVar6 + 0x1c) <= param_3))))
      goto LAB_10018f0d4;
    }
LAB_10018f0d2:
    lVar6 = 0;
LAB_10018f0d4:
    plVar7 = local_48 + 1;
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0x20);
    }
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x20))();
    }
    FUN_100190bd0(plVar1,&local_38);
    return;
  }
  local_48[0] = 0;
  lVar5 = *(long *)(*plVar1 + 0x10);
  lVar6 = 0;
  if (*(long *)(*plVar1 + 0x10) != 0) {
    do {
      while( true ) {
        lVar3 = lVar5;
        uVar8 = *(uint *)(lVar3 + 0x18);
        if ((param_2 <= uVar8) && ((uVar8 != param_2 || (param_3 <= *(uint *)(lVar3 + 0x1c)))))
        break;
        lVar5 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          if (lVar6 == 0) goto LAB_10018f022;
          uVar8 = *(uint *)(lVar6 + 0x18);
          lVar3 = lVar6;
          goto LAB_10018f016;
        }
      }
      lVar5 = *(long *)(lVar3 + 8);
      lVar6 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_10018f016:
    if ((uVar8 <= param_2) && ((uVar8 < param_2 || (*(uint *)(lVar3 + 0x1c) <= param_3))))
    goto LAB_10018f024;
  }
LAB_10018f022:
  lVar3 = 0;
LAB_10018f024:
  plVar7 = local_48;
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x20);
  }
  if (*plVar7 == 0) {
    pvVar4 = operator_new(0x28);
    FUN_100146a00(pvVar4,lVar2,param_1);
    local_50 = pvVar4;
    FUN_100190c90(plVar1,&local_38,&local_50);
  }
  return;
}

