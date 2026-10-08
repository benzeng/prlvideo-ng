
int _xmlCharInRange(uint val,xmlChRangeGroup *group)

{
  int iVar1;
  int local_24;
  int local_20;
  
  if (group != (xmlChRangeGroup *)0x0) {
    if (val < 0x10000) {
      if (group->nbShortRange == 0) {
        return 0;
      }
      local_24 = 0;
      local_20 = group->nbShortRange + -1;
      while (local_24 <= local_20) {
        iVar1 = (local_24 + local_20) / 2;
        if ((ushort)val < group->shortRange[iVar1].low) {
          local_20 = iVar1 + -1;
        }
        else {
          if ((ushort)val <= group->shortRange[iVar1].high) {
            return 1;
          }
          local_24 = iVar1 + 1;
        }
      }
    }
    else {
      if (group->nbLongRange == 0) {
        return 0;
      }
      local_24 = 0;
      local_20 = group->nbLongRange + -1;
      while (local_24 <= local_20) {
        iVar1 = (local_24 + local_20) / 2;
        if (val < group->longRange[iVar1].low) {
          local_20 = iVar1 + -1;
        }
        else {
          if (val <= group->longRange[iVar1].high) {
            return 1;
          }
          local_24 = iVar1 + 1;
        }
      }
    }
  }
  return 0;
}

