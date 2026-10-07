
byte * _xmlSplitQName(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  byte *local_f0;
  undefined1 local_bc [4];
  byte local_b8 [112];
  byte *local_48;
  int local_40;
  int local_3c;
  byte *local_38;
  byte *local_30;
  uint local_24;
  byte *local_20;
  uint local_14;
  byte *local_10;
  
  local_48 = (byte *)0x0;
  local_40 = 0;
  local_3c = 100;
  local_38 = (byte *)0x0;
  if (param_3 == (undefined8 *)0x0) {
    local_f0 = (byte *)0x0;
  }
  else {
    *param_3 = 0;
    if (param_2 == (byte *)0x0) {
      local_f0 = (byte *)0x0;
    }
    else {
      local_30 = param_2;
      if (*param_2 == 0x3a) {
        local_f0 = _xmlStrdup(param_2);
      }
      else {
        bVar1 = *param_2;
        while( true ) {
          local_24 = (uint)bVar1;
          local_30 = local_30 + 1;
          if (((local_24 == 0) || (local_24 == 0x3a)) || (local_3c <= local_40)) break;
          local_b8[local_40] = bVar1;
          local_40 = local_40 + 1;
          bVar1 = *local_30;
        }
        if (local_3c <= local_40) {
          local_3c = local_40 * 2;
          local_48 = (byte *)(*(code *)_xmlMallocAtomic)((long)local_3c);
          if (local_48 == (byte *)0x0) {
            _xmlErrMemory(param_1,0);
            return (byte *)0x0;
          }
          pbVar3 = local_b8;
          pbVar5 = local_48;
          for (lVar4 = (long)local_40; lVar4 != 0; lVar4 = lVar4 + -1) {
            *pbVar5 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
          }
          while ((local_24 != 0 && (local_24 != 0x3a))) {
            pbVar3 = local_48;
            if (local_3c < local_40 + 10) {
              local_3c = local_3c << 1;
              local_20 = (byte *)(*(code *)_xmlRealloc)(local_48,(long)local_3c);
              pbVar3 = local_20;
              if (local_20 == (byte *)0x0) {
                (*(code *)_xmlFree)(0);
                _xmlErrMemory(param_1,0);
                return (byte *)0x0;
              }
            }
            local_48 = pbVar3;
            local_48[local_40] = (byte)local_24;
            local_40 = local_40 + 1;
            bVar1 = *local_30;
            local_30 = local_30 + 1;
            local_24 = (uint)bVar1;
          }
          local_48[local_40] = 0;
        }
        if (local_48 == (byte *)0x0) {
          local_38 = _xmlStrndup(local_b8,local_40);
        }
        else {
          local_38 = local_48;
          local_48 = (byte *)0x0;
          local_3c = 100;
        }
        if (local_24 == 0x3a) {
          local_24 = (uint)*local_30;
          *param_3 = local_38;
          if (local_24 == 0) {
            pbVar3 = _xmlStrndup((xmlChar *)"",0);
            return pbVar3;
          }
          local_40 = 0;
          if ((((local_24 < 0x61) || (0x7a < local_24)) && ((local_24 < 0x41 || (0x5a < local_24))))
             && ((local_24 != 0x5f && (local_24 != 0x3a)))) {
            local_14 = _xmlStringCurrentChar(param_1,local_30,local_bc);
            if ((int)local_14 < 0x100) {
              if (((((int)local_14 < 0x41) || (0x5a < (int)local_14)) &&
                  (((int)local_14 < 0x61 || (0x7a < (int)local_14)))) &&
                 (((((int)local_14 < 0xc0 || (0xd6 < (int)local_14)) &&
                   (((int)local_14 < 0xd8 || (0xf6 < (int)local_14)))) && ((int)local_14 < 0xf8))))
              {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
            }
            else {
              iVar2 = _xmlCharInRange(local_14,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
              bVar6 = iVar2 == 0;
            }
            if ((bVar6) &&
               ((((int)local_14 < 0x100 ||
                 (((((int)local_14 < 0x4e00 || (0x9fa5 < (int)local_14)) && (local_14 != 0x3007)) &&
                  (((int)local_14 < 0x3021 || (0x3029 < (int)local_14)))))) && (local_14 != 0x5f))))
            {
              FUN_1001447b6(param_1,0xca,"Name %s is not XML Namespace compliant\n",param_2);
            }
          }
          for (; (local_30 = local_30 + 1, local_24 != 0 && (local_40 < local_3c));
              local_40 = local_40 + 1) {
            local_b8[local_40] = (byte)local_24;
            local_24 = (uint)*local_30;
          }
          if (local_3c <= local_40) {
            local_3c = local_40 * 2;
            local_48 = (byte *)(*(code *)_xmlMallocAtomic)((long)local_3c);
            if (local_48 == (byte *)0x0) {
              _xmlErrMemory(param_1,0);
              return (byte *)0x0;
            }
            pbVar3 = local_b8;
            pbVar5 = local_48;
            for (lVar4 = (long)local_40; lVar4 != 0; lVar4 = lVar4 + -1) {
              *pbVar5 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar5 = pbVar5 + 1;
            }
            while (local_24 != 0) {
              pbVar3 = local_48;
              if (local_3c < local_40 + 10) {
                local_3c = local_3c << 1;
                local_10 = (byte *)(*(code *)_xmlRealloc)(local_48,(long)local_3c);
                pbVar3 = local_10;
                if (local_10 == (byte *)0x0) {
                  _xmlErrMemory(param_1,0);
                  (*(code *)_xmlFree)(local_48);
                  return (byte *)0x0;
                }
              }
              local_48 = pbVar3;
              local_48[local_40] = (byte)local_24;
              local_40 = local_40 + 1;
              bVar1 = *local_30;
              local_30 = local_30 + 1;
              local_24 = (uint)bVar1;
            }
            local_48[local_40] = 0;
          }
          if (local_48 == (byte *)0x0) {
            local_38 = _xmlStrndup(local_b8,local_40);
          }
          else {
            local_38 = local_48;
          }
        }
        local_f0 = local_38;
      }
    }
  }
  return local_f0;
}

