
void FUN_100ce2a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_10225b1f0;
  FUN_100d04e00();
  puVar1 = param_1 + 0x5b;
  FUN_100d05150(puVar1);
  pQVar4 = (QArrayData *)param_1[0x5e];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2b2c;
      pQVar4 = (QArrayData *)param_1[0x5e];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce2ae0;
            pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce2ae0:
        pQVar3 = *(QArrayData **)(pQVar2 + 8);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce2b10;
            pQVar3 = *(QArrayData **)(pQVar2 + 8);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce2b10:
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce2b2c:
  pQVar4 = (QArrayData *)param_1[0x5d];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2bcb;
      pQVar4 = (QArrayData *)param_1[0x5d];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10) + 0x10;
      do {
        pQVar3 = *(QArrayData **)pQVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100ce2ba0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pQVar2;
            goto LAB_100ce2ba0;
          }
        }
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce2bcb:
  pQVar4 = (QArrayData *)param_1[0x5c];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2c03;
      pQVar4 = (QArrayData *)param_1[0x5c];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2c03:
  pQVar4 = (QArrayData *)*puVar1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2ccc;
      pQVar4 = (QArrayData *)*puVar1;
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce2c80;
            pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce2c80:
        pQVar3 = *(QArrayData **)(pQVar2 + 8);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce2cb0;
            pQVar3 = *(QArrayData **)(pQVar2 + 8);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce2cb0:
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce2ccc:
  pQVar4 = (QArrayData *)param_1[0x5a];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2d5b;
      pQVar4 = (QArrayData *)param_1[0x5a];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10) + 0x10;
      do {
        pQVar3 = *(QArrayData **)pQVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100ce2d30:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pQVar2;
            goto LAB_100ce2d30;
          }
        }
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce2d5b:
  pQVar4 = (QArrayData *)param_1[0x58];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2d93;
      pQVar4 = (QArrayData *)param_1[0x58];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2d93:
  pQVar4 = (QArrayData *)param_1[0x56];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2dcb;
      pQVar4 = (QArrayData *)param_1[0x56];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2dcb:
  FUN_100d05c20(param_1 + 0x4e);
  FUN_100d05c20(param_1 + 0x47);
  FUN_100d05c20(param_1 + 0x40);
  FUN_100d05c20(param_1 + 0x39);
  FUN_100d05c20(param_1 + 0x32);
  pQVar4 = (QArrayData *)param_1[0x31];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2e82;
      pQVar4 = (QArrayData *)param_1[0x31];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2e82:
  pQVar4 = (QArrayData *)param_1[0x2f];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2ec8;
      pQVar4 = (QArrayData *)param_1[0x2f];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2ec8:
  pQVar4 = (QArrayData *)param_1[0x2d];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2f06;
      pQVar4 = (QArrayData *)param_1[0x2d];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2f06:
  pQVar4 = (QArrayData *)param_1[0x2b];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2f56;
      pQVar4 = (QArrayData *)param_1[0x2b];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2f56:
  pQVar4 = (QArrayData *)param_1[0x29];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2f9c;
      pQVar4 = (QArrayData *)param_1[0x29];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2f9c:
  pQVar4 = (QArrayData *)param_1[0x27];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce2fdf;
      pQVar4 = (QArrayData *)param_1[0x27];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce2fdf:
  pQVar4 = (QArrayData *)param_1[0x25];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce301d;
      pQVar4 = (QArrayData *)param_1[0x25];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce301d:
  pQVar4 = (QArrayData *)param_1[0x23];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce30ec;
      pQVar4 = (QArrayData *)param_1[0x23];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce30a0;
            pQVar3 = *(QArrayData **)(pQVar2 + 0x10);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce30a0:
        pQVar3 = *(QArrayData **)(pQVar2 + 8);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_100ce30d0;
            pQVar3 = *(QArrayData **)(pQVar2 + 8);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100ce30d0:
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce30ec:
  pQVar4 = (QArrayData *)param_1[0x22];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce318b;
      pQVar4 = (QArrayData *)param_1[0x22];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x28;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10) + 0x10;
      do {
        pQVar3 = *(QArrayData **)pQVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100ce3160:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pQVar2;
            goto LAB_100ce3160;
          }
        }
        pQVar2 = pQVar2 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x28,8);
  }
LAB_100ce318b:
  pQVar4 = (QArrayData *)param_1[0x21];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce31c3;
      pQVar4 = (QArrayData *)param_1[0x21];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce31c3:
  pQVar4 = (QArrayData *)param_1[0x20];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce31fb;
      pQVar4 = (QArrayData *)param_1[0x20];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce31fb:
  FUN_100d05e10(param_1 + 10);
  pQVar4 = (QArrayData *)param_1[9];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce329b;
      pQVar4 = (QArrayData *)param_1[9];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) * 0x18;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        pQVar3 = *(QArrayData **)pQVar2;
        if (*(int *)pQVar3 == 0) {
LAB_100ce3270:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 == 0) {
            pQVar3 = *(QArrayData **)pQVar2;
            goto LAB_100ce3270;
          }
        }
        pQVar2 = pQVar2 + 0x18;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x18,8);
  }
LAB_100ce329b:
  pQVar4 = (QArrayData *)param_1[6];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce3304;
      pQVar4 = (QArrayData *)param_1[6];
    }
    lVar5 = (long)*(int *)(pQVar4 + 4) << 5;
    if (lVar5 != 0) {
      pQVar2 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        FUN_100d05f40(pQVar2);
        pQVar2 = pQVar2 + 0x20;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar4,0x20,8);
  }
LAB_100ce3304:
  pQVar4 = (QArrayData *)param_1[3];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100ce3336;
      pQVar4 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100ce3336:
  pQVar4 = (QArrayData *)param_1[2];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

