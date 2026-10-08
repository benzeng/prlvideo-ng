
void FUN_1000d37a0(long *param_1,int *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  void *pvVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 in_stack_ffffffffffffff68;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  if ((param_2[1] == *(int *)((long)param_1 + 0x214)) && (*param_2 == (int)param_1[0x42])) {
    uVar9 = FUN_1000bd0c0(param_1);
    cVar5 = FUN_1000bd130(param_1,uVar9);
    if (cVar5 != '\0') {
      return;
    }
  }
  QMutex::lock();
  iVar10 = FUN_1000dfea0(param_1);
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  if (iVar10 == -2) {
    if ((0 < DAT_10230ffd0) &&
       (FUN_100df99c0("SGAC","prl_client_app",1,"Helper with psn={%u, %u} failed to start Vm",
                      *param_2,param_2[1]), 2 < DAT_10230ffd0)) {
      FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                    param_2[1],CONCAT44(uVar9,0x1436));
    }
    FUN_1000c6a60(param_1,param_2);
    goto LAB_1000d3e02;
  }
  if (iVar10 != 0) goto LAB_1000d3e02;
  if (param_2[1] == *(int *)((long)param_1 + 0x214)) {
    cVar5 = '\0';
    lVar16 = 0;
    if (*param_2 == (int)param_1[0x42]) {
LAB_1000d3b66:
      cVar7 = FUN_1000bd150(param_1);
      if (cVar7 == '\0') {
        if (2 < DAT_10230ffd0) {
          uVar11 = FUN_1001d50a0();
          uVar8 = FUN_1001d50e0(uVar11);
          FUN_100df99c0("SGAC","prl_client_app",3,"active=%d activate=%d",uVar8,cVar5);
        }
        if ((*(int *)((long)param_1 + 0x21c) != 0) || ((int)param_1[0x43] != 0)) {
          if (DAT_102310928 == (void *)0x0) {
            pvVar12 = operator_new(0x18);
            FUN_1001d4a60(pvVar12);
            DAT_102273638 = 1;
            DAT_102310928 = pvVar12;
          }
          uVar13 = FUN_1001d4b90(DAT_102310928);
          if ((uVar13 & 2) != 0) {
            _SetFrontProcessWithOptions(param_1 + 0x43,1);
          }
        }
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      else if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x20) & 0x40) != 0)) {
        *(undefined1 *)((long)param_1 + 0x269) = 1;
        FUN_1000c4970(param_2,0x97,0,0);
      }
      if ((cVar5 == '\0') || (*(int *)(param_1[0x47] + 0xc) != *(int *)(param_1[0x47] + 8)))
      goto LAB_1000d3e02;
      local_50 = (QArrayData *)param_1[2];
      lVar4 = param_1[10];
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      FUN_1000b0de0(lVar4,&local_50,*(undefined8 *)param_2,(*(uint *)(lVar16 + 0x20) & 8) >> 3);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d3cee;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1000d3cee:
      if (((*(byte *)(lVar16 + 0x20) & 8) == 0) || (*(char *)((long)param_1 + 0x104) != '\0')) {
        if (param_3 != 0) {
          lVar4 = *(long *)(lVar16 + 0x68);
          if (lVar4 == 0) {
            FUN_1000b8ea0(param_1,lVar16,param_3);
          }
          else {
            uVar8 = FUN_1000a6420();
            FUN_1000b9410(param_1,lVar4,uVar8);
            *(undefined8 *)(lVar16 + 0x68) = 0;
          }
        }
        goto LAB_1000d3e02;
      }
      uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
      FUN_1000b9340(&local_68,lVar16);
      FUN_1000beed0(&local_60,&local_68);
      FUN_1000bd810(&local_58,&local_60);
      local_70 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_1000e91d0(uVar11,&local_58,&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d3eab;
        }
        QArrayData::deallocate(local_70,8,8);
      }
LAB_1000d3eab:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d3edb;
        }
        QArrayData::deallocate(local_58,4,8);
      }
LAB_1000d3edb:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d3f01;
        }
        QListData::dispose(local_60);
      }
LAB_1000d3f01:
      if (*(int *)(local_68 + 0x10) != -1) {
        if (*(int *)(local_68 + 0x10) != 0) {
          LOCK();
          pcVar2 = local_68 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          local_31 = *(int *)pcVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d3e02;
        }
        QHashData::free_helper(local_68);
      }
      goto LAB_1000d3e02;
    }
  }
  FUN_1000ae4d0(param_2);
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  if ((param_2[1] != *(int *)((long)param_1 + 0x21c)) || (*param_2 != (int)param_1[0x43])) {
    puVar14 = (uint *)param_1[0xb];
    if ((int)puVar14[2] < (int)puVar14[3]) {
      plVar1 = param_1 + 0xb;
      lVar16 = 0;
      do {
        if (1 < *puVar14) {
          FUN_1000e6e10(plVar1,puVar14[1]);
          puVar14 = (uint *)*plVar1;
        }
        uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
        uVar15 = puVar14[2];
        if ((*(int *)(*(long *)(puVar14 + (lVar16 + (int)uVar15) * 2 + 4) + 0x30) == *param_2) &&
           (*(int *)(*(long *)(puVar14 + (lVar16 + (int)uVar15) * 2 + 4) + 0x34) == param_2[1])) {
          if (-1 < (int)lVar16) {
            if (1 < *puVar14) {
              FUN_1000e6e10(plVar1,puVar14[1]);
              puVar14 = (uint *)*plVar1;
              uVar15 = puVar14[2];
            }
            lVar16 = *(long *)(puVar14 + ((long)(int)lVar16 + (long)(int)uVar15) * 2 + 4);
            cVar5 = '\x01';
            if (*(int *)(*(long *)(lVar16 + 0x38) + 0xc) != *(int *)(*(long *)(lVar16 + 0x38) + 8))
            goto LAB_1000d3b66;
            if (DAT_10230ffd0 < 3) goto LAB_1000d3e02;
            iVar10 = *param_2;
            iVar3 = param_2[1];
            QString::toUtf8();
            FUN_100df99c0("SGAC","prl_client_app",3,
                          "Helper with psn={%u, %u} has no linked guest \"%s\" processes",iVar10,
                          iVar3,local_48 + *(long *)(local_48 + 0x10));
            if (*(int *)local_48 == -1) goto LAB_1000d3e02;
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000d3e02;
            }
            QArrayData::deallocate(local_48,1,8);
            goto LAB_1000d3e02;
          }
          break;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)(int)puVar14[3] - (long)(int)uVar15);
    }
    if ((0 < DAT_10230ffd0) &&
       (FUN_100df99c0("SGAC","prl_client_app",1,"Helper with psn={%u, %u} not registered",*param_2,
                      param_2[1]), 2 < DAT_10230ffd0)) {
      FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                    param_2[1],CONCAT44(uVar9,0x1466));
    }
    FUN_1000c6a60(param_1,param_2);
    goto LAB_1000d3e02;
  }
  cVar5 = FUN_1000bd150(param_1);
  if (cVar5 == '\0') {
    if (1 < DAT_10230ffd0) {
      uVar8 = *(undefined1 *)((long)param_1 + 0x251);
      uVar11 = FUN_1001d50a0();
      uVar6 = FUN_1001d50e0(uVar11);
      FUN_100df99c0("SGAC","prl_client_app",2,"Interactive stub activated m_wasActive=%d a=%d",uVar8
                    ,uVar6);
    }
    if (DAT_102310928 == (void *)0x0) {
      pvVar12 = operator_new(0x18);
      FUN_1001d4a60(pvVar12);
      DAT_102273638 = 1;
      DAT_102310928 = pvVar12;
    }
    uVar13 = FUN_1001d4b90(DAT_102310928);
    if (((uVar13 & 2) != 0) && (*(char *)((long)param_1 + 0x251) != '\0')) {
      uVar11 = FUN_1001d50a0();
      cVar5 = FUN_1001d50e0(uVar11);
      if (cVar5 != '\0') goto LAB_1000d3dfa;
    }
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  else {
    if (1 < DAT_10230ffd0) {
      uVar8 = *(undefined1 *)((long)param_1 + 0x251);
      uVar11 = FUN_1001d50a0();
      uVar6 = FUN_1001d50e0(uVar11);
      FUN_100df99c0("SGAC","prl_client_app",2,
                    "Interactive stub activated in coherence m_needReactivate=%d a=%d",uVar8,uVar6);
    }
    if (DAT_102310928 == (void *)0x0) {
      pvVar12 = operator_new(0x18);
      FUN_1001d4a60(pvVar12);
      DAT_102273638 = 1;
      DAT_102310928 = pvVar12;
    }
    uVar13 = FUN_1001d4b90(DAT_102310928);
    if (((uVar13 & 2) == 0) || (*(int *)((long)param_1 + 0x254) != 1)) {
      *(undefined4 *)((long)param_1 + 0x254) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x254) = 2;
      _GetCurrentProcess(local_40);
      _SetFrontProcessWithOptions(local_40,1);
    }
  }
LAB_1000d3dfa:
  *(undefined1 *)((long)param_1 + 0x251) = 1;
LAB_1000d3e02:
  QMutex::unlock();
  return;
}

