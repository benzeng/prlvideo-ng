
undefined8 * FUN_100704ae0(undefined8 *param_1,long param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  Data *pDVar5;
  long lVar6;
  int *piVar7;
  QKeySequence *this;
  Data *local_80;
  undefined4 local_78;
  undefined4 local_6c;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e15d0;
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  if (param_3 == '\0') {
    FUN_100707470(&local_40,*(long *)(param_2 + 0x10) + 0x30);
  }
  else {
    FUN_1006fbdf0(&local_40);
  }
  *param_1 = puVar4;
  FUN_100706d20(&local_68,&local_40);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar2 = local_60[2];
      if (iVar2 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar7 = local_60 + (long)iVar2 * 2 + 4;
        lVar6 = (long)local_60[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = *(int **)local_68;
          *(int **)piVar7 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_68 = local_68 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100036370(&local_68);
  if ((local_48 != 0) && (local_58 != local_50)) {
    do {
      piVar7 = local_58;
      local_6c = FUN_100694830(local_58);
      lVar6 = FUN_100565d60(param_1,&local_6c);
      FUN_100707540(&local_80,&local_40,piVar7);
      FUN_100707070(lVar6,&local_80);
      pDVar5 = local_80;
      *(undefined4 *)(lVar6 + 8) = local_78;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100704c9e;
        }
        iVar2 = *(int *)(local_80 + 0xc);
        if (iVar2 != *(int *)(local_80 + 8)) {
          lVar6 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar2 * -8;
          this = (QKeySequence *)(local_80 + (long)iVar2 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(this);
            this = this + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(pDVar5);
      }
LAB_100704c9e:
      local_58 = local_58 + 2;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  FUN_100036370(&local_60);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

