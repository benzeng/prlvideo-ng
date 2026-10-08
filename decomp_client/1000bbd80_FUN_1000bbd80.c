
void FUN_1000bbd80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  QArrayData *local_98;
  undefined1 local_90 [16];
  int *local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_31;
  
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  iVar3 = FUN_1000bb930(param_1,&local_78,0xffffffff);
  puVar2 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000bbe07;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1000bbe07:
  if (iVar3 == 0) {
    lVar1 = param_1 + 0x60;
    FUN_1000bfad0(&local_80,lVar1);
    FUN_1000bddb0(lVar1);
    if (local_80[3] != local_80[2]) {
      do {
        FUN_1000bde90(&local_98,&local_80);
        iVar3 = FUN_1000bb580(param_1,&local_98);
        if (iVar3 == -2) {
          FUN_1000bddb0(lVar1);
          FUN_1000bddb0(&local_80);
        }
        else if (iVar3 == 1) {
          FUN_1000be080(lVar1,&local_98);
        }
        FUN_100039a80(local_90);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000bbece;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1000bbece:
      } while (local_80[3] != local_80[2]);
    }
    if (*local_80 != -1) {
      if (*local_80 != 0) {
        LOCK();
        *local_80 = *local_80 + -1;
        local_31 = *local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000bbf08;
      }
      FUN_1000beb10(&local_80,local_80);
    }
  }
LAB_1000bbf08:
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_31 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  return;
}

