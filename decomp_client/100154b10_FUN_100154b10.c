
undefined8 * FUN_100154b10(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  undefined8 local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100062ec0(&local_58,param_2 + 0x10);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_50;
      lVar2 = (*(undefined8 **)local_50)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        if ((piVar1 != (int *)0x0) && (lVar2 != 0)) {
          iVar5 = 0;
          iVar3 = piVar1[1];
          if (iVar3 != 0) {
            while( true ) {
              lVar6 = lVar2;
              if (iVar3 == 0) {
                lVar6 = 0;
              }
              iVar3 = FUN_10015d3a0(lVar6);
              if (iVar3 <= iVar5) break;
              lVar6 = 0;
              if (piVar1[1] != 0) {
                lVar6 = lVar2;
              }
              local_60 = FUN_10015d330(lVar6,iVar5);
              FUN_10012c6e0(param_1,&local_60);
              iVar5 = iVar5 + 1;
              iVar3 = piVar1[1];
            }
          }
        }
        local_40 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar4;
    } while ((bVar7) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_100063050(&local_58,local_58);
  }
  return param_1;
}

