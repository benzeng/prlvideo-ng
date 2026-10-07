
void * FUN_100713bf0(int *param_1)

{
  sa_family_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  ifaddrs *piVar8;
  sockaddr *psVar9;
  ifaddrs *piVar10;
  size_t sVar11;
  long lVar12;
  int local_64;
  ifaddrs *local_60;
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  undefined1 local_50 [4];
  undefined1 auStack_4c [4];
  undefined1 local_48 [4];
  undefined1 auStack_44 [12];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  local_38 = lVar12;
  iVar3 = _getifaddrs(&local_60);
  piVar10 = local_60;
  if (iVar3 == 0) {
    sVar11 = 1;
    if (local_60 != (ifaddrs *)0x0) {
      iVar3 = 1;
      piVar8 = local_60;
      do {
        iVar3 = iVar3 + 1;
        piVar8 = piVar8->ifa_next;
      } while (piVar8 != (ifaddrs *)0x0);
      sVar11 = (size_t)iVar3;
    }
    pvVar5 = _calloc(sVar11,0xac);
    if (pvVar5 == (void *)0x0) {
      _freeifaddrs(piVar10);
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      iVar3 = 0;
      if (piVar10 != (ifaddrs *)0x0) {
        local_64 = 0;
        pcVar6 = "00:00:00:00:00:00";
        iVar3 = 0;
        do {
          psVar9 = piVar10->ifa_addr;
          sVar1 = psVar9->sa_family;
          if (sVar1 == '\x12') {
            if (psVar9->sa_data[4] == '\0') {
              pcVar6 = "00:00:00:00:00:00";
            }
            else if (psVar9->sa_data[4] == '\x06') {
              if (psVar9->sa_data[2] == '\x06') {
                pcVar6 = _ether_ntoa((ether_addr *)
                                     (psVar9->sa_data + (ulong)(byte)psVar9->sa_data[3] + 6));
                psVar9 = piVar10->ifa_addr;
                sVar1 = psVar9->sa_family;
                local_64 = 0;
                goto LAB_100713ced;
              }
              pcVar6 = "00:00:00:00:00:00";
            }
            else {
              pcVar6 = "00:00:00:00:00:00";
            }
          }
          else {
LAB_100713ced:
            if (sVar1 == '\x02') {
              lVar12 = (long)iVar3 * 0xac;
              uVar2 = *(uint *)(psVar9->sa_data + 2);
              *(uint *)((long)pvVar5 + lVar12 + 0x40) = uVar2;
              if ((uVar2 & 0xff) != 0x7f) {
                _strcpy((char *)((long)pvVar5 + lVar12),piVar10->ifa_name);
                pcVar7 = _inet_ntoa((in_addr)*(in_addr_t *)((long)pvVar5 + lVar12 + 0x40));
                _strcpy((char *)((long)pvVar5 + lVar12 + 0x4a),pcVar7);
                pcVar7 = _inet_ntoa((in_addr)*(in_addr_t *)(piVar10->ifa_netmask->sa_data + 2));
                _strcpy((char *)((long)pvVar5 + lVar12 + 0x6a),pcVar7);
                pcVar7 = (char *)((long)pvVar5 + lVar12 + 0x8a);
                if (local_64 == 0) {
                  _strcpy(pcVar7,pcVar6);
                  iVar4 = _sscanf(pcVar6,"%02x:%02x:%02x:%02x:%02x:%02x*",local_58,auStack_54,
                                  local_50,auStack_4c,local_48,auStack_44);
                  if (iVar4 != 6) {
                    _free(pvVar5);
                    pvVar5 = (void *)0x0;
                    goto LAB_100713e67;
                  }
                  *(char *)((long)pvVar5 + lVar12 + 0x44) = (char)_local_58;
                  *(char *)((long)pvVar5 + lVar12 + 0x45) = (char)((ulong)_local_58 >> 0x20);
                  *(char *)((long)pvVar5 + lVar12 + 0x46) = (char)_local_50;
                  *(char *)((long)pvVar5 + lVar12 + 0x47) = (char)((ulong)_local_50 >> 0x20);
                  *(char *)((long)pvVar5 + lVar12 + 0x48) = (char)_local_48;
                  *(char *)((long)pvVar5 + lVar12 + 0x49) = (char)((ulong)_local_48 >> 0x20);
                }
                else {
                  *pcVar7 = '\0';
                }
                local_64 = local_64 + 1;
                iVar3 = iVar3 + 1;
              }
            }
          }
          piVar10 = piVar10->ifa_next;
        } while (piVar10 != (ifaddrs *)0x0);
      }
      *(undefined1 *)((long)pvVar5 + (long)iVar3 * 0xac) = 0;
      if (param_1 != (int *)0x0) {
        *param_1 = iVar3;
      }
LAB_100713e67:
      _freeifaddrs(local_60);
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (pvVar5 != (void *)0x0) goto LAB_100713eaf;
    }
  }
  pvVar5 = (void *)0x0;
  FUN_10071e690(0xffffffff,"Can\'t get network configuration");
LAB_100713eaf:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar5;
}

