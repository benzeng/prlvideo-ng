
undefined1 FUN_100b39e20(long param_1,QString *param_2,QString *param_3,int *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined1 uVar10;
  long *plVar11;
  long *plVar12;
  long *local_38;
  
  plVar6 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(plVar6 + 4);
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar1;
    plVar7 = *(long **)(plVar6[1] + uVar2 * 8);
    if (plVar7 == plVar6) {
      uVar10 = 0;
    }
    else {
      plVar12 = (long *)(plVar6[1] + uVar2 * 8);
      do {
        plVar8 = plVar7;
        plVar11 = plVar6;
        if (*(uint *)(plVar7 + 1) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(plVar7 + 2));
          plVar6 = (long *)*plVar12;
          plVar11 = *(long **)(param_1 + 8);
          plVar8 = plVar6;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar11;
        plVar7 = (long *)*plVar8;
        plVar11 = plVar6;
        plVar12 = plVar8;
      } while (plVar7 != plVar6);
      if (plVar6 == plVar11) {
        uVar10 = 0;
      }
      else {
        FUN_100b3b650(&local_38,(undefined8 *)(param_1 + 8),param_2);
        plVar6 = *(long **)(local_38[2] + 0x70);
        iVar9 = 0;
        uVar10 = 0;
        if ((plVar6 == (long *)0x0) || (uVar10 = 0, *(long *)(local_38[2] + 0x78) == 0)) {
LAB_100b39f36:
          if (local_38 == (long *)0x0) {
            return uVar10;
          }
        }
        else {
          do {
            cVar4 = operator==((QString *)(plVar6 + 3),param_3);
            if (cVar4 != '\0') {
              *param_4 = iVar9;
              uVar10 = 1;
              goto LAB_100b39f36;
            }
          } while (((plVar6 != *(long **)(local_38[2] + 0x78)) &&
                   (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) &&
                  (iVar9 = iVar9 + 1, iVar9 != 0));
          uVar10 = 0;
        }
        LOCK();
        plVar6 = local_38 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  return uVar10;
}

