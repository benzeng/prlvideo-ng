
void FUN_100692020(QObject *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  _func_void_Node_ptr *p_Var4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  _func_void_Node_ptr *p_Var9;
  long lVar10;
  long lVar11;
  QAction *this;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  QAction *local_98;
  QVariant local_90;
  QString local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  _func_void_Node_ptr *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/CActionStorage.cpp",0x69,"createActions");
  }
  QObject::property((char *)&local_48);
  uVar6 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  local_50 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  uVar8 = FUN_1006b9420();
  FUN_1006b9660(&local_78,uVar8,uVar6);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar10 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_70 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar10 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 == -1) {
LAB_10069218f:
    if (local_68 != local_60) {
      do {
        FUN_1006925f0(param_1,*(undefined8 *)local_68,param_2);
        QObject::property((char *)&local_90);
        QVariant::toString();
        QVariant::~QVariant(&local_90);
        p_Var4 = local_50;
        if (*(int *)(local_80.field0_0x0 + 4) != 0) {
          uVar2 = *(uint *)(local_50 + 0x20);
          if (uVar2 == 0) {
LAB_100692310:
            this = operator_new(0x10);
            QActionGroup::QActionGroup((QActionGroup *)this,param_1);
          }
          else {
            uVar7 = qHash(&local_80,*(uint *)(local_50 + 0x24));
            uVar3 = (ulong)uVar7 % (ulong)uVar2;
            p_Var13 = *(_func_void_Node_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
            if (p_Var13 == p_Var4) goto LAB_100692310;
            p_Var12 = (_func_void_Node_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
            do {
              if (*(uint *)(p_Var13 + 8) == uVar7) {
                cVar5 = operator==(&local_80,(QString *)(p_Var13 + 0x10));
                p_Var9 = *(_func_void_Node_ptr **)p_Var12;
                p_Var13 = *(_func_void_Node_ptr **)p_Var12;
                if (cVar5 != '\0') break;
              }
              p_Var12 = p_Var13;
              p_Var13 = *(_func_void_Node_ptr **)p_Var12;
              p_Var9 = p_Var4;
            } while (p_Var13 != p_Var4);
            if (p_Var9 == p_Var4) goto LAB_100692310;
            this = (QAction *)0x0;
            if (*(int *)(p_Var4 + 0x14) != 0) {
              uVar2 = *(uint *)(p_Var4 + 0x20);
              this = (QAction *)0x0;
              if (uVar2 != 0) {
                uVar7 = qHash(&local_80,*(uint *)(p_Var4 + 0x24));
                uVar3 = (ulong)uVar7 % (ulong)uVar2;
                p_Var13 = *(_func_void_Node_ptr **)(*(long *)(p_Var4 + 8) + uVar3 * 8);
                this = (QAction *)0x0;
                if (p_Var13 != p_Var4) {
                  p_Var12 = (_func_void_Node_ptr *)(*(long *)(p_Var4 + 8) + uVar3 * 8);
                  do {
                    if (*(uint *)(p_Var13 + 8) == uVar7) {
                      cVar5 = operator==(&local_80,(QString *)(p_Var13 + 0x10));
                      p_Var9 = *(_func_void_Node_ptr **)p_Var12;
                      p_Var13 = *(_func_void_Node_ptr **)p_Var12;
                      if (cVar5 != '\0') break;
                    }
                    p_Var12 = p_Var13;
                    p_Var13 = *(_func_void_Node_ptr **)p_Var12;
                    p_Var9 = p_Var4;
                  } while (p_Var13 != p_Var4);
                  this = (QAction *)0x0;
                  if (p_Var9 != p_Var4) {
                    this = *(QAction **)(p_Var9 + 0x18);
                  }
                }
              }
            }
          }
          local_98 = this;
          FUN_100693bf0(&local_50,&local_80,&local_98);
          QActionGroup::addAction(this);
          QActionGroup::setExclusive(SUB81(this,0));
        }
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10069239c;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_10069239c:
        local_68 = local_68 + 8;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  else {
    if (*(int *)local_78 == 0) {
LAB_100692180:
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100692180;
    }
    if (local_58 != 0) goto LAB_10069218f;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006923df;
    }
    QListData::dispose(local_70);
  }
LAB_1006923df:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper(local_50);
  }
  return;
}

