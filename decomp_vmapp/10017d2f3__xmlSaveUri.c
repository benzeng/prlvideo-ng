
/* WARNING: Removing unreachable block (ram,0x00010017e4df) */
/* WARNING: Removing unreachable block (ram,0x00010017dea6) */
/* WARNING: Removing unreachable block (ram,0x00010017d6c0) */
/* WARNING: Removing unreachable block (ram,0x00010017d9d6) */
/* WARNING: Removing unreachable block (ram,0x00010017e1b8) */
/* WARNING: Removing unreachable block (ram,0x00010017e806) */

long _xmlSaveUri(long *param_1)

{
  byte bVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  long local_98;
  char local_8c;
  char local_8b;
  char local_8a;
  char local_89;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84;
  char local_83;
  char local_82;
  char local_81;
  long local_78;
  byte *local_70;
  int local_68;
  int local_64;
  
  if (param_1 == (long *)0x0) {
    local_98 = 0;
  }
  else {
    local_64 = 0x50;
    local_78 = (*(code *)_xmlMallocAtomic)(0x51);
    if (local_78 == 0) {
      ppxVar6 = ___xmlGenericError();
      pxVar2 = *ppxVar6;
      ppvVar7 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
      local_98 = 0;
    }
    else {
      local_68 = 0;
      if (*param_1 != 0) {
        for (local_70 = (byte *)*param_1; *local_70 != '\0'; local_70 = local_70 + 1) {
          if (local_64 <= local_68) {
            local_64 = local_64 * 2;
            local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
            if (local_78 == 0) {
              ppxVar6 = ___xmlGenericError();
              pxVar2 = *ppxVar6;
              ppvVar7 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
              return 0;
            }
          }
          *(byte *)(local_68 + local_78) = *local_70;
          local_68 = local_68 + 1;
        }
        if (local_64 <= local_68) {
          local_64 = local_64 * 2;
          local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
          if (local_78 == 0) {
            ppxVar6 = ___xmlGenericError();
            pxVar2 = *ppxVar6;
            ppvVar7 = ___xmlGenericErrorContext();
            (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
            return 0;
          }
        }
        *(undefined1 *)(local_68 + local_78) = 0x3a;
        local_68 = local_68 + 1;
      }
      if (param_1[1] == 0) {
        if (param_1[3] == 0) {
          if (param_1[2] == 0) {
            if (*param_1 != 0) {
              if (local_64 <= local_68 + 3) {
                local_64 = local_64 * 2;
                local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
                if (local_78 == 0) {
                  ppxVar6 = ___xmlGenericError();
                  pxVar2 = *ppxVar6;
                  ppvVar7 = ___xmlGenericErrorContext();
                  (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                  return 0;
                }
              }
              *(undefined1 *)(local_68 + local_78) = 0x2f;
              *(undefined1 *)((local_68 + 1) + local_78) = 0x2f;
              local_68 = local_68 + 2;
            }
          }
          else {
            if (local_64 <= local_68 + 3) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            *(undefined1 *)(local_68 + local_78) = 0x2f;
            *(undefined1 *)((local_68 + 1) + local_78) = 0x2f;
            local_68 = local_68 + 2;
            local_70 = (byte *)param_1[2];
            while (*local_70 != 0) {
              if (local_64 <= local_68 + 3) {
                local_64 = local_64 * 2;
                local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
                if (local_78 == 0) {
                  ppxVar6 = ___xmlGenericError();
                  pxVar2 = *ppxVar6;
                  ppvVar7 = ___xmlGenericErrorContext();
                  (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                  return 0;
                }
              }
              if ((((((char)*local_70 < 'a') || ('z' < (char)*local_70)) &&
                   (((char)*local_70 < 'A' || ('Z' < (char)*local_70)))) &&
                  ((((((char)*local_70 < '0' || ('9' < (char)*local_70)) && (*local_70 != 0x2d)) &&
                    ((*local_70 != 0x5f && (*local_70 != 0x2e)))) &&
                   ((*local_70 != 0x21 && ((*local_70 != 0x7e && (*local_70 != 0x2a)))))))) &&
                 (((((*local_70 != 0x27 &&
                     (((*local_70 != 0x28 && (*local_70 != 0x29)) && (*local_70 != 0x24)))) &&
                    (((*local_70 != 0x2c && (*local_70 != 0x3b)) && (*local_70 != 0x3a)))) &&
                   ((*local_70 != 0x40 && (*local_70 != 0x26)))) &&
                  ((*local_70 != 0x3d && (*local_70 != 0x2b)))))) {
                bVar1 = *local_70;
                local_70 = local_70 + 1;
                uVar4 = (int)(uint)bVar1 >> 4;
                uVar5 = (uint)bVar1 % 0x10;
                *(undefined1 *)(local_68 + local_78) = 0x25;
                if (uVar4 < 10) {
                  local_88 = '0';
                }
                else {
                  local_88 = '7';
                }
                *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_88;
                if (uVar5 < 10) {
                  local_87 = '0';
                }
                else {
                  local_87 = '7';
                }
                *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_87;
                local_68 = local_68 + 3;
              }
              else {
                *(byte *)(local_68 + local_78) = *local_70;
                local_70 = local_70 + 1;
                local_68 = local_68 + 1;
              }
            }
          }
        }
        else {
          if (local_64 <= local_68 + 3) {
            local_64 = local_64 * 2;
            local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
            if (local_78 == 0) {
              ppxVar6 = ___xmlGenericError();
              pxVar2 = *ppxVar6;
              ppvVar7 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
              return 0;
            }
          }
          *(undefined1 *)(local_68 + local_78) = 0x2f;
          *(undefined1 *)((local_68 + 1) + local_78) = 0x2f;
          local_68 = local_68 + 2;
          if (param_1[4] != 0) {
            local_70 = (byte *)param_1[4];
            while (*local_70 != 0) {
              if (local_64 <= local_68 + 3) {
                local_64 = local_64 * 2;
                local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
                if (local_78 == 0) {
                  ppxVar6 = ___xmlGenericError();
                  pxVar2 = *ppxVar6;
                  ppvVar7 = ___xmlGenericErrorContext();
                  (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                  return 0;
                }
              }
              if ((((((char)*local_70 < 'a') || ('z' < (char)*local_70)) &&
                   ((((char)*local_70 < 'A' || ('Z' < (char)*local_70)) &&
                    (((((char)*local_70 < '0' || ('9' < (char)*local_70)) && (*local_70 != 0x2d)) &&
                     (((*local_70 != 0x5f && (*local_70 != 0x2e)) && (*local_70 != 0x21)))))))) &&
                  (((*local_70 != 0x7e && (*local_70 != 0x2a)) &&
                   ((*local_70 != 0x27 &&
                    (((((*local_70 != 0x28 && (*local_70 != 0x29)) && (*local_70 != 0x3b)) &&
                      ((*local_70 != 0x3a && (*local_70 != 0x26)))) && (*local_70 != 0x3d)))))))) &&
                 (((*local_70 != 0x2b && (*local_70 != 0x24)) && (*local_70 != 0x2c)))) {
                bVar1 = *local_70;
                local_70 = local_70 + 1;
                uVar4 = (int)(uint)bVar1 >> 4;
                uVar5 = (uint)bVar1 % 0x10;
                *(undefined1 *)(local_68 + local_78) = 0x25;
                if (uVar4 < 10) {
                  local_8a = '0';
                }
                else {
                  local_8a = '7';
                }
                *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_8a;
                if (uVar5 < 10) {
                  local_89 = '0';
                }
                else {
                  local_89 = '7';
                }
                *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_89;
                local_68 = local_68 + 3;
              }
              else {
                *(byte *)(local_68 + local_78) = *local_70;
                local_70 = local_70 + 1;
                local_68 = local_68 + 1;
              }
            }
            if (local_64 <= local_68 + 3) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            *(undefined1 *)(local_68 + local_78) = 0x40;
            local_68 = local_68 + 1;
          }
          for (local_70 = (byte *)param_1[3]; *local_70 != '\0'; local_70 = local_70 + 1) {
            if (local_64 <= local_68) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            *(byte *)(local_68 + local_78) = *local_70;
            local_68 = local_68 + 1;
          }
          if (0 < (int)param_1[5]) {
            if (local_64 <= local_68 + 10) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            iVar3 = _snprintf((char *)(local_68 + local_78),(long)(local_64 - local_68),":%d",
                              (ulong)*(uint *)(param_1 + 5));
            local_68 = local_68 + iVar3;
          }
        }
        if (param_1[6] != 0) {
          local_70 = (byte *)param_1[6];
          while (*local_70 != 0) {
            if (local_64 <= local_68 + 3) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            if ((((((((char)*local_70 < 'a') || ('z' < (char)*local_70)) &&
                   (((char)*local_70 < 'A' || ('Z' < (char)*local_70)))) &&
                  ((((char)*local_70 < '0' || ('9' < (char)*local_70)) && (*local_70 != 0x2d)))) &&
                 ((*local_70 != 0x5f && (*local_70 != 0x2e)))) &&
                ((*local_70 != 0x21 &&
                 (((*local_70 != 0x7e && (*local_70 != 0x2a)) &&
                  ((*local_70 != 0x27 &&
                   (((*local_70 != 0x28 && (*local_70 != 0x29)) && (*local_70 != 0x2f)))))))))) &&
               (((*local_70 != 0x3b && (*local_70 != 0x40)) &&
                ((*local_70 != 0x26 &&
                 (((*local_70 != 0x3d && (*local_70 != 0x2b)) &&
                  ((*local_70 != 0x24 && (*local_70 != 0x2c)))))))))) {
              bVar1 = *local_70;
              local_70 = local_70 + 1;
              uVar4 = (int)(uint)bVar1 >> 4;
              uVar5 = (uint)bVar1 % 0x10;
              *(undefined1 *)(local_68 + local_78) = 0x25;
              if (uVar4 < 10) {
                local_86 = '0';
              }
              else {
                local_86 = '7';
              }
              *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_86;
              if (uVar5 < 10) {
                local_85 = '0';
              }
              else {
                local_85 = '7';
              }
              *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_85;
              local_68 = local_68 + 3;
            }
            else {
              *(byte *)(local_68 + local_78) = *local_70;
              local_70 = local_70 + 1;
              local_68 = local_68 + 1;
            }
          }
        }
        if (param_1[7] != 0) {
          if (local_64 <= local_68 + 3) {
            local_64 = local_64 * 2;
            local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
            if (local_78 == 0) {
              ppxVar6 = ___xmlGenericError();
              pxVar2 = *ppxVar6;
              ppvVar7 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
              return 0;
            }
          }
          *(undefined1 *)(local_68 + local_78) = 0x3f;
          local_68 = local_68 + 1;
          local_70 = (byte *)param_1[7];
          while (*local_70 != 0) {
            if (local_64 <= local_68 + 3) {
              local_64 = local_64 * 2;
              local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
              if (local_78 == 0) {
                ppxVar6 = ___xmlGenericError();
                pxVar2 = *ppxVar6;
                ppvVar7 = ___xmlGenericErrorContext();
                (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
                return 0;
              }
            }
            if (((((char)*local_70 < 'a') || ('z' < (char)*local_70)) &&
                ((((((char)*local_70 < 'A' || ('Z' < (char)*local_70)) &&
                   (((((char)*local_70 < '0' || ('9' < (char)*local_70)) && (*local_70 != 0x2d)) &&
                    ((*local_70 != 0x5f && (*local_70 != 0x2e)))))) &&
                  ((*local_70 != 0x21 &&
                   ((((*local_70 != 0x7e && (*local_70 != 0x2a)) &&
                     ((*local_70 != 0x27 &&
                      (((*local_70 != 0x28 && (*local_70 != 0x29)) && (*local_70 != 0x3b)))))) &&
                    ((*local_70 != 0x2f && (*local_70 != 0x3f)))))))) && (*local_70 != 0x3a)))) &&
               ((((*local_70 != 0x40 && (*local_70 != 0x26)) &&
                 ((*local_70 != 0x3d &&
                  (((*local_70 != 0x2b && (*local_70 != 0x24)) && (*local_70 != 0x2c)))))) &&
                ((*local_70 != 0x5b && (*local_70 != 0x5d)))))) {
              bVar1 = *local_70;
              local_70 = local_70 + 1;
              uVar4 = (int)(uint)bVar1 >> 4;
              uVar5 = (uint)bVar1 % 0x10;
              *(undefined1 *)(local_68 + local_78) = 0x25;
              if (uVar4 < 10) {
                local_84 = '0';
              }
              else {
                local_84 = '7';
              }
              *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_84;
              if (uVar5 < 10) {
                local_83 = '0';
              }
              else {
                local_83 = '7';
              }
              *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_83;
              local_68 = local_68 + 3;
            }
            else {
              *(byte *)(local_68 + local_78) = *local_70;
              local_70 = local_70 + 1;
              local_68 = local_68 + 1;
            }
          }
        }
      }
      else {
        local_70 = (byte *)param_1[1];
        while (*local_70 != 0) {
          if (local_64 <= local_68 + 3) {
            local_64 = local_64 * 2;
            local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
            if (local_78 == 0) {
              ppxVar6 = ___xmlGenericError();
              pxVar2 = *ppxVar6;
              ppvVar7 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
              return 0;
            }
          }
          if (((((*local_70 == 0x3b) || (*local_70 == 0x2f)) ||
               ((*local_70 == 0x3f ||
                ((((*local_70 == 0x3a || (*local_70 == 0x40)) || (*local_70 == 0x26)) ||
                 ((*local_70 == 0x3d || (*local_70 == 0x2b)))))))) ||
              (((*local_70 == 0x24 || ((*local_70 == 0x2c || (*local_70 == 0x5b)))) ||
               ((*local_70 == 0x5d || (('`' < (char)*local_70 && ((char)*local_70 < '{')))))))) ||
             (((('@' < (char)*local_70 && ((char)*local_70 < '[')) ||
               (((('/' < (char)*local_70 && ((char)*local_70 < ':')) || (*local_70 == 0x2d)) ||
                (((*local_70 == 0x5f || (*local_70 == 0x2e)) ||
                 ((*local_70 == 0x21 || ((*local_70 == 0x7e || (*local_70 == 0x2a)))))))))) ||
              ((*local_70 == 0x27 || ((*local_70 == 0x28 || (*local_70 == 0x29)))))))) {
            *(byte *)(local_68 + local_78) = *local_70;
            local_70 = local_70 + 1;
            local_68 = local_68 + 1;
          }
          else {
            bVar1 = *local_70;
            local_70 = local_70 + 1;
            uVar4 = (int)(uint)bVar1 >> 4;
            uVar5 = (uint)bVar1 % 0x10;
            *(undefined1 *)(local_68 + local_78) = 0x25;
            if (uVar4 < 10) {
              local_8c = '0';
            }
            else {
              local_8c = '7';
            }
            *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_8c;
            if (uVar5 < 10) {
              local_8b = '0';
            }
            else {
              local_8b = '7';
            }
            *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_8b;
            local_68 = local_68 + 3;
          }
        }
      }
      if (param_1[8] != 0) {
        if (local_64 <= local_68 + 3) {
          local_64 = local_64 * 2;
          local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
          if (local_78 == 0) {
            ppxVar6 = ___xmlGenericError();
            pxVar2 = *ppxVar6;
            ppvVar7 = ___xmlGenericErrorContext();
            (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
            return 0;
          }
        }
        *(undefined1 *)(local_68 + local_78) = 0x23;
        local_68 = local_68 + 1;
        local_70 = (byte *)param_1[8];
        while (*local_70 != 0) {
          if (local_64 <= local_68 + 3) {
            local_64 = local_64 * 2;
            local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 + 1));
            if (local_78 == 0) {
              ppxVar6 = ___xmlGenericError();
              pxVar2 = *ppxVar6;
              ppvVar7 = ___xmlGenericErrorContext();
              (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
              return 0;
            }
          }
          if (((((((char)*local_70 < 'a') || ('z' < (char)*local_70)) &&
                (((char)*local_70 < 'A' || ('Z' < (char)*local_70)))) &&
               ((((char)*local_70 < '0' || ('9' < (char)*local_70)) && (*local_70 != 0x2d)))) &&
              (((((*local_70 != 0x5f && (*local_70 != 0x2e)) &&
                 ((*local_70 != 0x21 &&
                  (((*local_70 != 0x7e && (*local_70 != 0x2a)) &&
                   ((*local_70 != 0x27 &&
                    (((((*local_70 != 0x28 && (*local_70 != 0x29)) && (*local_70 != 0x3b)) &&
                      ((*local_70 != 0x2f && (*local_70 != 0x3f)))) && (*local_70 != 0x3a))))))))))
                && ((*local_70 != 0x40 && (*local_70 != 0x26)))) && (*local_70 != 0x3d)))) &&
             ((((*local_70 != 0x2b && (*local_70 != 0x24)) && (*local_70 != 0x2c)) &&
              ((*local_70 != 0x5b && (*local_70 != 0x5d)))))) {
            bVar1 = *local_70;
            local_70 = local_70 + 1;
            uVar4 = (int)(uint)bVar1 >> 4;
            uVar5 = (uint)bVar1 % 0x10;
            *(undefined1 *)(local_68 + local_78) = 0x25;
            if (uVar4 < 10) {
              local_82 = '0';
            }
            else {
              local_82 = '7';
            }
            *(char *)((local_68 + 1) + local_78) = (char)uVar4 + local_82;
            if (uVar5 < 10) {
              local_81 = '0';
            }
            else {
              local_81 = '7';
            }
            *(char *)((local_68 + 2) + local_78) = (char)uVar5 + local_81;
            local_68 = local_68 + 3;
          }
          else {
            *(byte *)(local_68 + local_78) = *local_70;
            local_70 = local_70 + 1;
            local_68 = local_68 + 1;
          }
        }
      }
      if ((local_68 < local_64) ||
         (local_78 = (*(code *)_xmlRealloc)(local_78,(long)(local_64 * 2 + 1)), local_78 != 0)) {
        *(undefined1 *)(local_68 + local_78) = 0;
        local_98 = local_78;
      }
      else {
        ppxVar6 = ___xmlGenericError();
        pxVar2 = *ppxVar6;
        ppvVar7 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar7,"xmlSaveUri: out of memory\n");
        local_98 = 0;
      }
    }
  }
  return local_98;
}

