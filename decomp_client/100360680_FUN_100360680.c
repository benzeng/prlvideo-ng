
long FUN_100360680(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  int iVar6;
  bool bVar7;
  long local_78;
  QVariant local_70;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = FUN_10018c280(lVar5);
  uVar4 = FUN_100319d40(uVar4);
  FUN_10035ba90(&local_60,uVar4);
  FUN_10006b440(&local_58,&local_60);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  local_78 = extraout_RDX;
  if (*local_60 == -1) {
LAB_10036073a:
    do {
      iVar6 = 2;
      if (local_50 == local_48) break;
      piVar1 = (int *)**(undefined8 **)local_50;
      lVar5 = (*(undefined8 **)local_50)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      iVar6 = 5;
      if (local_40 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar5 != 0)) && (piVar1[1] != 0)) {
          QObject::property((char *)&local_70);
          iVar2 = QVariant::toUInt((bool *)&local_70);
          QVariant::~QVariant(&local_70);
          if (iVar2 == param_2) {
            local_78 = 0;
            if (piVar1[1] != 0) {
              local_78 = lVar5;
            }
            iVar6 = 1;
            goto LAB_1003607f7;
          }
        }
        local_40 = 0;
      }
LAB_1003607f7:
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      if (iVar6 != 5) break;
      local_50 = local_50 + 2;
      uVar3 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      iVar6 = 2;
      local_40 = uVar3;
    } while (bVar7);
  }
  else {
    if (*local_60 == 0) {
LAB_100360726:
      FUN_10006b5d0(&local_60,local_60);
      local_78 = extraout_RDX_00;
    }
    else {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100360726;
    }
    if (local_40 != 0) goto LAB_10036073a;
    local_78 = 0;
    iVar6 = 2;
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) goto LAB_100360877;
      local_31 = 0;
    }
    FUN_10006b5d0(&local_58,local_58);
  }
LAB_100360877:
  if (iVar6 == 2) {
    local_78 = 0;
  }
  return local_78;
}

