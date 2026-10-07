
undefined8 FUN_100762bf0(bool *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char local_19;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = QString::toULongLong(param_1,(int)&local_19);
    if (local_19 == '\0') {
      lVar3 = *(long *)param_1;
      iVar1 = QString::compare_helper
                        (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"io",0xffffffff,
                         1);
      lVar3 = 0;
      if (iVar1 != 0) {
        lVar3 = *(long *)param_1;
        iVar1 = QString::compare_helper
                          (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"net",
                           0xffffffff,1);
        lVar3 = 1;
        if (iVar1 != 0) {
          lVar3 = *(long *)param_1;
          iVar1 = QString::compare_helper
                            (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"mon",
                             0xffffffff,1);
          lVar3 = 2;
          if (iVar1 != 0) {
            lVar3 = *(long *)param_1;
            iVar1 = QString::compare_helper
                              (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"usb",
                               0xffffffff,1);
            lVar3 = 3;
            if (iVar1 != 0) {
              lVar3 = *(long *)param_1;
              iVar1 = QString::compare_helper
                                (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"ios",
                                 0xffffffff,1);
              lVar3 = 4;
              if (iVar1 != 0) {
                lVar3 = *(long *)param_1;
                iVar1 = QString::compare_helper
                                  (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"pax",
                                   0xffffffff,1);
                lVar3 = 5;
                if (iVar1 != 0) {
                  lVar3 = *(long *)param_1;
                  iVar1 = QString::compare_helper
                                    (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),
                                     "all",0xffffffff,1);
                  lVar3 = 6;
                  if (iVar1 != 0) {
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      uVar2 = (&DAT_100bcedc8)[lVar3 * 2];
    }
    *param_2 = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

