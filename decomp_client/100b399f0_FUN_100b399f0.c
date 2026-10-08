
undefined1 FUN_100b399f0(long param_1,QString *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *local_40;
  undefined1 local_38 [8];
  
  plVar5 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(plVar5 + 4);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = qHash(param_2,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar8 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar8 == plVar5) {
      uVar6 = 0;
    }
    else {
      plVar11 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar7 = plVar5;
        plVar9 = plVar8;
        if (*(uint *)(plVar8 + 1) == uVar4) {
          cVar3 = operator==(param_2,(QString *)(plVar8 + 2));
          plVar5 = (long *)*plVar11;
          plVar7 = *(long **)(param_1 + 8);
          plVar9 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar7;
        plVar8 = (long *)*plVar9;
        plVar7 = plVar5;
        plVar11 = plVar9;
      } while (plVar8 != plVar5);
      if (plVar5 == plVar7) {
        uVar6 = 0;
      }
      else {
        FUN_100b3b650(&local_40,(undefined8 *)(param_1 + 8),param_2);
        lVar10 = 0;
        if (local_40 != (long *)0x0) {
          lVar10 = local_40[2];
        }
        FUN_100b3b720(local_38,lVar10 + 0x80);
        FUN_1000e5fc0(param_3,local_38);
        FUN_100039a80(local_38);
        uVar6 = 1;
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
    }
  }
  return uVar6;
}

