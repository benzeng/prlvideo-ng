
bool FUN_100aa9140(long param_1,QByteArray *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar4 = FUN_100aaabf0(param_1 + 8);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_102281880;
  plVar5[3] = (long)FUN_100c7cd70;
  if (lVar4 == 0) {
    bVar8 = false;
    goto LAB_100aa92c5;
  }
  lVar4 = FUN_100c6d320();
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar4;
  *plVar6 = (long)&PTR_FUN_102281c38;
  plVar6[3] = (long)FUN_100c6d8c0;
  if (lVar4 == 0) {
    bVar8 = false;
  }
  else {
    lVar4 = FUN_100aaad50(param_1 + 0x10);
    if (lVar4 == 0) {
      bVar8 = false;
    }
    else {
      iVar3 = FUN_100c6d510(plVar6[2],6,lVar4);
      if (iVar3 == 0) {
        FUN_100c47630(lVar4);
        bVar8 = false;
      }
      else {
        lVar4 = plVar5[2];
        lVar2 = plVar6[2];
        uVar7 = FUN_100c6ca00();
        lVar4 = FUN_100c92f80(lVar4,lVar2,uVar7);
        if (lVar4 == 0) {
          bVar8 = false;
        }
        else {
          FUN_100aaad70(&local_40,lVar4);
          QByteArray::operator=(param_2,(QByteArray *)&local_40);
          if (*(int *)local_40 == 0) {
LAB_100aa926e:
            QArrayData::deallocate(local_40,1,8);
          }
          else if (*(int *)local_40 != -1) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if (!(bool)local_32) goto LAB_100aa926e;
          }
          bVar8 = *(int *)(*(long *)param_2 + 4) != 0;
        }
      }
    }
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_100aa92c5:
  LOCK();
  plVar6 = plVar5 + 1;
  lVar4 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return bVar8;
}

