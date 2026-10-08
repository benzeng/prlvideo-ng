
void FUN_1000d5520(undefined8 param_1,double param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_3 + 2);
  if (lVar6 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    uVar5 = FUN_10018c280(lVar6);
    uVar5 = FUN_100319c50(uVar5);
    cVar2 = FUN_100330a50(uVar5);
    if (cVar2 != '\0') {
      QMutex::lock();
      iVar3 = FUN_1000cf550(param_3,param_4);
      if (iVar3 < 0) {
        QMutex::unlock();
        return;
      }
      puVar7 = (uint *)param_3[0xb];
      if (1 < *puVar7) {
        FUN_1000e6e10(param_3 + 0xb,puVar7[1]);
        puVar7 = (uint *)param_3[0xb];
      }
      lVar6 = *(long *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)puVar7[2]) * 2 + 4) + 0x38);
      plVar8 = (long *)(lVar6 + 8 + (long)*(int *)(lVar6 + 0xc) * 8);
      lVar10 = (long)*(int *)(lVar6 + 8) * 8 + (long)*(int *)(lVar6 + 0xc) * -8;
      lVar6 = 0;
      do {
        if (lVar10 == 0) goto LAB_1000d5609;
        plVar1 = (long *)*plVar8;
        plVar8 = plVar8 + -1;
        lVar10 = lVar10 + 8;
      } while ((*(byte *)((long)plVar1 + 0x1c) & 2) == 0);
      lVar6 = *plVar1;
LAB_1000d5609:
      QMutex::unlock();
      if (lVar6 != 0) {
        uVar9 = _CGEventCreate(0);
        dVar11 = (double)_CGEventGetLocation(uVar9);
        local_48 = (int)dVar11;
        local_44 = (int)param_2;
        _CFRelease(uVar9);
        local_50 = 0;
        local_4c = 0;
        local_60 = 0;
        local_58 = 0xffffffffffffffff;
        cVar2 = FUN_100330fe0(uVar5,&local_48,&local_60,&local_50,&local_68);
        if (cVar2 == '\0') {
          FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get guest display rectangle");
        }
        else {
          local_78 = 0;
          local_70 = 0xffffffffffffffff;
          FUN_100ae7810(local_88);
          uVar4 = FUN_100ae7f00(&local_78,0,0);
          if ((uVar4 & 0xfffffffd) == 0) {
            iVar3 = ((int)local_70 + 1) - (int)local_78;
          }
          else {
            iVar3 = (local_70._4_4_ + 1) - local_78._4_4_;
          }
          if (uVar4 == 3) {
            local_44 = local_70._4_4_ - iVar3;
          }
          else if (uVar4 == 2) {
            local_48 = (int)local_70 - iVar3;
          }
          else if (uVar4 == 0) {
            local_48 = iVar3;
          }
          iVar3 = (int)local_60;
          if ((local_48 < (int)local_60) || (iVar3 = (int)local_58, (int)local_58 < local_48)) {
            local_48 = iVar3;
          }
          iVar3 = local_60._4_4_;
          if ((local_44 < local_60._4_4_) || (iVar3 = local_58._4_4_, local_58._4_4_ < local_44)) {
            local_44 = iVar3;
          }
          local_48 = (int)((double)(local_48 - local_50) * local_68);
          local_44 = (int)((double)(local_44 - local_4c) * local_68);
          uVar5 = (**(code **)(*param_3 + 0x68))(param_3);
          FUN_1000e9360(uVar5,lVar6,uVar4,local_48,local_44);
          FUN_100ae79a0(local_88);
        }
      }
    }
  }
  return;
}

