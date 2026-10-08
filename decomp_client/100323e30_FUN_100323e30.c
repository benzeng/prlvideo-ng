
undefined8 FUN_100323e30(long param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if ((lVar2 == 0) && (3 < DAT_10230ffd0)) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319390(uVar1);
    FUN_100188480(&local_40,uVar1);
    QString::toLocal8Bit();
    pQVar7 = local_38 + *(long *)(local_38 + 0x10);
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar1 = FUN_100319390(uVar1);
    FUN_1001884b0(&local_50,uVar1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",4,"VmUuid %s, ServerUuid %s createIfAbsent = %d",pQVar7,
                  local_48 + *(long *)(local_48 + 0x10),param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100323f4c;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100323f4c:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100323f7c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100323f7c:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100323fac;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100323fac:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100323fdc;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100323fdc:
  lVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if ((lVar2 != 0) || (param_2 != '\x01')) goto LAB_10032418f;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     ((*(int *)(*(long *)(param_1 + 0x10) + 4) == 0 || (*(long *)(param_1 + 0x18) == 0)))) {
    pcVar6 = "(!)Error: failed to create a VM display widget. VM desktop does not exist.";
  }
  else {
    lVar2 = FUN_100319390();
    if (lVar2 != 0) {
      pQVar3 = operator_new(0x40);
      FUN_100379580(pQVar3,param_1,0);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0x20);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          local_29 = *piVar4 != 0;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0x20);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_29 = *piVar5 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x20));
          }
        }
        *(int **)(param_1 + 0x20) = piVar4;
        *(QObject **)(param_1 + 0x28) = pQVar3;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
      if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
         (*(long *)(param_1 + 0x78) != 0)) {
        uVar1 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar1 = *(undefined8 *)(param_1 + 0x28);
        }
        FUN_100343d10(*(long *)(param_1 + 0x78),uVar1);
      }
      FUN_100324300(param_1);
      uVar1 = FUN_100370280();
      if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
         (*(long *)(param_1 + 0x18) == 0)) {
        local_58 = (QArrayData *)PTR_shared_null_1021e1288;
      }
      else {
        FUN_1003193e0(&local_58);
      }
      FUN_100833f10(uVar1,&local_58,*(undefined4 *)(param_1 + 0x30));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_10032418f;
          local_29 = 0;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10032418f:
      if (*(long *)(param_1 + 0x20) == 0) {
        return 0;
      }
      if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
        return 0;
      }
      return *(undefined8 *)(param_1 + 0x28);
    }
    pcVar6 = "(!)Error: failed to create a VM display widget. VM does not exist.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar6);
  return 0;
}

