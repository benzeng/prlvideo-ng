
void FUN_1000f1600(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  QArrayData *local_110;
  undefined8 local_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  uint local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_31;
  
  if ((((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 4) != 0)) &&
      (param_2 == 0)) && (*(long *)(param_1 + 0x10) != 0)) {
    local_e0 = PTR_shared_null_1021e15e8;
    FUN_100095510(&local_100,param_3);
    local_f8 = (long *)(local_100 + 0x10 + (long)*(int *)(local_100 + 8) * 8);
    local_f0 = (long *)(local_100 + 0x10 + (long)*(int *)(local_100 + 0xc) * 8);
    local_e8 = 1;
    if (*(int *)(local_100 + 8) != *(int *)(local_100 + 0xc)) {
      do {
        puVar1 = (undefined8 *)*local_f8;
        pQVar2 = (QArrayData *)*puVar1;
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        pQVar3 = (QArrayData *)puVar1[1];
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        local_108 = puVar1[2];
        local_110 = pQVar3;
        if (local_e8 != 0) {
          if ((int)local_108 == 0) {
            FUN_1000341d0(&local_e0,&local_110);
          }
          local_e8 = 0;
        }
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f1746;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_1000f1746:
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000f1775;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_1000f1775:
        local_f8 = local_f8 + 1;
        uVar4 = local_e8 ^ 1;
        bVar6 = local_e8 != 1;
        local_e8 = uVar4;
      } while ((bVar6) && (local_f8 != local_f0));
    }
    FUN_1000f1a40(&local_100);
    uVar5 = 0;
    if ((*(long *)(param_1 + 8) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_48 = &local_e0;
    local_40 = "const QStringList&";
    QMetaObject::invokeMethod
              (uVar5,"sigRecentDocs",2,0,0,param_6,local_48,"const QStringList&",0,0,0,0,0,0,0,0,0,0
               ,0,0,0,0,0,0,0,0);
    FUN_100039a80(&local_e0);
  }
  return;
}

