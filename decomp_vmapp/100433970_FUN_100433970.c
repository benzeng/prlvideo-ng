
char FUN_100433970(long param_1,QString *param_2,long *param_3,char param_4)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_40;
  char local_31;
  
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0x10) == 0)) {
    FUN_1008e3970("","IODesktopServer",0,"Error: package is null!");
    return '\x01';
  }
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    FUN_1004348e0(param_1,param_3,0);
    return '\x04';
  }
  QMutex::lock();
  plVar6 = *(long **)(param_1 + 0x20);
  uVar4 = *(uint *)(plVar6 + 4);
  if (uVar4 != 0) {
    uVar3 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
    uVar1 = (ulong)uVar3 % (ulong)uVar4;
    plVar8 = *(long **)(plVar6[1] + uVar1 * 8);
    if (plVar8 != plVar6) {
      plVar10 = (long *)(plVar6[1] + uVar1 * 8);
      do {
        plVar9 = plVar8;
        plVar11 = plVar6;
        if (*(uint *)(plVar8 + 1) == uVar3) {
          cVar2 = operator==(param_2,(QString *)(plVar8 + 2));
          plVar6 = (long *)*plVar10;
          plVar11 = *(long **)(param_1 + 0x20);
          plVar9 = plVar6;
          if (cVar2 != '\0') break;
        }
        plVar6 = plVar11;
        plVar8 = (long *)*plVar9;
        plVar10 = plVar9;
        plVar11 = plVar6;
      } while (plVar8 != plVar6);
      if ((((plVar6 != plVar11) &&
           (lVar7 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2),
           (*(byte *)(lVar7 + 9) & 0x10) != 0)) &&
          (uVar4 = *(int *)(*(long *)(*param_3 + 0x10) + 0x40) - 0x1895f, uVar4 < 0x24)) &&
         ((0x800008181U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) {
        QMutex::unlock();
        return '\x01';
      }
    }
  }
  QMutex::unlock();
  (**(code **)(**(long **)(param_1 + 0x10) + 0x120))
            (&local_40,*(long **)(param_1 + 0x10),param_2,param_3);
  plVar6 = local_40;
  if (param_4 == '\0') {
LAB_100433b6a:
    iVar5 = 2;
    if ((local_40 != (long *)0x0) && (local_40[2] != 0)) {
      iVar5 = FUN_1007965e0();
      cVar2 = '\0';
      if ((iVar5 == 0) || (cVar2 = '\0', iVar5 == 6)) goto LAB_100433bfe;
    }
    FUN_1008e3970("","IODesktopServer",0,"Error: send failed for pkg type \'%d\', res=%d",
                  *(undefined4 *)(*(long *)(*param_3 + 0x10) + 0x40),iVar5);
    cVar2 = (iVar5 == 7) * '\x02' + '\x01';
  }
  else {
    if ((local_40 != (long *)0x0) && (local_40[2] != 0)) {
      local_31 = '\0';
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      cVar2 = FUN_100796350(local_40[2],0x32,&local_31);
      iVar5 = 4;
      if ((cVar2 != '\0') && (iVar5 = 0, local_31 != '\0')) {
        iVar5 = 5;
      }
      LOCK();
      plVar8 = plVar6 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (iVar5 == 0) goto LAB_100433b6a;
      cVar2 = '\x02';
      if (iVar5 == 4) goto LAB_100433bfe;
    }
    cVar2 = '\x01';
  }
LAB_100433bfe:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return cVar2;
}

