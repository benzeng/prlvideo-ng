
void FUN_100290be0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  
  *(undefined4 *)
   ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4110 +
   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 1;
  (**(code **)(*param_1 + 0x70))();
  bVar1 = true;
  bVar2 = false;
  while( true ) {
    if (bVar2) {
      if ((*(int *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4310 +
                   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) == 0 &&
           *(int *)((long)param_1 + 0x1014) == 0) || ((int)param_1[0x202] != 0)) {
        cVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar3 == '\0') {
          bVar4 = FUN_1002583d0(param_1);
          bVar5 = bVar4 ^ 1;
          if ((bVar1) && (bVar4 == 0)) {
            (**(code **)(*param_1 + 0x98))(param_1);
            if ((*(int *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4310
                         + (ulong)*(ushort *)(param_1 + 0x1fe) * 4) == 0 &&
                 *(int *)((long)param_1 + 0x1014) == 0) || ((int)param_1[0x202] != 0)) {
              cVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
              if (cVar3 == '\0') {
                bVar5 = FUN_1002583d0(param_1);
                bVar5 = bVar5 ^ 1;
              }
              else {
                bVar5 = 0;
              }
            }
            else {
              bVar5 = 0;
            }
            if (bVar5 != 0) {
              bVar1 = false;
            }
          }
        }
        else {
          bVar5 = 0;
        }
      }
      else {
        bVar5 = 0;
      }
    }
    else {
      bVar5 = 0;
    }
    *(undefined4 *)
     ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4110 +
     (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 0;
    iVar6 = FUN_1002efb70(param_1[8],bVar5,0xffffffff);
    *(undefined4 *)
     ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4110 +
     (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 1;
    if (iVar6 == -0xfffc) {
      (**(code **)(*param_1 + 0x68))(param_1);
      *(undefined4 *)
       ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4110 +
       (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 0;
      return;
    }
    if (iVar6 == -0xfffd) break;
    if (bVar1) goto LAB_100290cbb;
LAB_100290d24:
    if (iVar6 == -0xfffe) {
      bVar2 = true;
    }
    else if (iVar6 == 3) {
      FUN_100291050(param_1);
    }
  }
  bVar1 = true;
  bVar2 = false;
LAB_100290cbb:
  lVar7 = FUN_1000b3d20(DAT_1011c3698);
  param_1[0x201] = lVar7;
  do {
    FUN_100290e70(param_1);
    while( true ) {
      cVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
      if (cVar3 != '\0') break;
      FUN_1002ef6b0(param_1[8]);
      cVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
      if (cVar3 == '\0') {
        if (!bVar2) {
          (**(code **)(*param_1 + 0xe0))(param_1);
        }
        goto LAB_100290d24;
      }
      FUN_1002ef6d0(param_1[8]);
    }
  } while( true );
}

