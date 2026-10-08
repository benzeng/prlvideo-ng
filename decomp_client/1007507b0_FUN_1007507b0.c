
undefined1 FUN_1007507b0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper(".xml",4);
  cVar1 = QString::endsWith(param_1,&local_28,0);
  uVar2 = 1;
  if (cVar1 != '\0') goto LAB_100750b2e;
  local_30 = (QArrayData *)QString::fromAscii_helper(".vbox",5);
  cVar1 = QString::endsWith(param_1,&local_30,0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    local_38 = (QArrayData *)QString::fromAscii_helper(".vmx",4);
    cVar1 = QString::endsWith(param_1,&local_38,0);
    uVar2 = 1;
    if (cVar1 == '\0') {
      local_40 = (QArrayData *)QString::fromAscii_helper(".vmc",4);
      cVar1 = QString::endsWith(param_1,&local_40,0);
      uVar2 = 1;
      if (cVar1 == '\0') {
        local_48 = (QArrayData *)QString::fromAscii_helper(".vpc7",5);
        cVar1 = QString::endsWith(param_1,&local_48,0);
        uVar2 = 1;
        if (cVar1 == '\0') {
          local_50 = (QArrayData *)QString::fromAscii_helper(".vpc6",5);
          cVar1 = QString::endsWith(param_1,&local_50,0);
          uVar2 = 1;
          if (cVar1 == '\0') {
            local_58 = (QArrayData *)QString::fromAscii_helper(".vmwarevm",9);
            cVar1 = QString::endsWith(param_1,&local_58,0);
            uVar2 = 1;
            if (cVar1 == '\0') {
              local_60 = (QArrayData *)QString::fromAscii_helper(".vmdk",5);
              cVar1 = QString::endsWith(param_1,&local_60,0);
              uVar2 = 1;
              if (cVar1 == '\0') {
                local_68 = (QArrayData *)QString::fromAscii_helper(".vhd",4);
                cVar1 = QString::endsWith(param_1,&local_68,0);
                uVar2 = 1;
                if (cVar1 == '\0') {
                  local_70 = (QArrayData *)QString::fromAscii_helper(".vdi",4);
                  uVar2 = QString::endsWith(param_1,&local_70,0);
                  if (*(int *)local_70 != -1) {
                    if (*(int *)local_70 != 0) {
                      LOCK();
                      *(int *)local_70 = *(int *)local_70 + -1;
                      local_19 = *(int *)local_70 != 0;
                      UNLOCK();
                      if ((bool)local_19) goto LAB_1007509ae;
                    }
                    QArrayData::deallocate(local_70,2,8);
                  }
                }
LAB_1007509ae:
                if (*(int *)local_68 != -1) {
                  if (*(int *)local_68 != 0) {
                    LOCK();
                    *(int *)local_68 = *(int *)local_68 + -1;
                    local_19 = *(int *)local_68 != 0;
                    UNLOCK();
                    if ((bool)local_19) goto LAB_1007509de;
                  }
                  QArrayData::deallocate(local_68,2,8);
                }
              }
LAB_1007509de:
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_19 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_19) goto LAB_100750a0e;
                }
                QArrayData::deallocate(local_60,2,8);
              }
            }
LAB_100750a0e:
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_19 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_19) goto LAB_100750a3e;
              }
              QArrayData::deallocate(local_58,2,8);
            }
          }
LAB_100750a3e:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_19 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_100750a6e;
            }
            QArrayData::deallocate(local_50,2,8);
          }
        }
LAB_100750a6e:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_19 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100750a9e;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_100750a9e:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_19 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100750ace;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_100750ace:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100750afe;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100750afe:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100750b2e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100750b2e:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar2;
}

