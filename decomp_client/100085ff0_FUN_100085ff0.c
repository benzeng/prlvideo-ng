
void FUN_100085ff0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  Node *local_70;
  Node *local_68;
  QVariant local_60;
  QArrayData *local_50;
  int *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_100086de0(&local_48,param_5);
  if (local_48 == (int *)0x0) {
    return;
  }
  if ((local_48[1] == 0) || (local_40 == 0)) goto LAB_100086245;
  FUN_100060bb0();
  lVar2 = 0;
  if (local_48[1] != 0) {
    lVar2 = local_40;
  }
  iVar1 = FUN_100060e10(lVar2);
  if (iVar1 != 3) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x18),PTR_s_appBar_102269f78);
    FUN_100084410(&local_70);
    iVar1 = *(int *)(local_70 + 0x20);
    uVar7 = 0;
    if (iVar1 != 0) {
      plVar6 = *(long **)(local_70 + 8);
      do {
        pNVar4 = (Node *)*plVar6;
        uVar7 = 0;
        if (pNVar4 != local_70) goto LAB_1000861a0;
        iVar1 = iVar1 + -1;
        plVar6 = plVar6 + 1;
      } while (iVar1 != 0);
    }
    goto LAB_1000861b9;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  QObject::property((char *)&local_60);
  QVariant::toString();
  lVar2 = FUN_10007f750(uVar3,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000860c3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000860c3:
  QVariant::~QVariant(&local_60);
  if (lVar2 == 0) goto LAB_100086245;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  FUN_100084410(&local_68);
  iVar1 = *(int *)(local_68 + 0x20);
  uVar7 = 0;
  if (iVar1 != 0) {
    plVar6 = *(long **)(local_68 + 8);
    do {
      pNVar4 = (Node *)*plVar6;
      uVar7 = 0;
      if (pNVar4 != local_68) goto LAB_100086130;
      iVar1 = iVar1 + -1;
      plVar6 = plVar6 + 1;
    } while (iVar1 != 0);
  }
  goto LAB_1000861fc;
  while (pNVar4 = (Node *)QHashData::nextNode(pNVar4), pNVar4 != local_70) {
LAB_1000861a0:
    if (*(int *)(pNVar4 + 0x10) == param_2) {
      uVar7 = *(undefined4 *)(pNVar4 + 0xc);
      break;
    }
  }
LAB_1000861b9:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_updateButton__102269fe0,uVar7);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pNVar4 = local_70 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100086245;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_70);
  }
  goto LAB_100086245;
  while (pNVar4 = (Node *)QHashData::nextNode(pNVar4), pNVar4 != local_68) {
LAB_100086130:
    if (*(int *)(pNVar4 + 0x10) == param_2) {
      uVar7 = *(undefined4 *)(pNVar4 + 0xc);
      break;
    }
  }
LAB_1000861fc:
  uVar5 = FUN_10008bad0(lVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_updateButton_item__102269fd8,uVar7,uVar5);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pNVar4 = local_68 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100086245;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_68);
  }
LAB_100086245:
  LOCK();
  *local_48 = *local_48 + -1;
  local_31 = *local_48 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(local_48);
  }
  return;
}

