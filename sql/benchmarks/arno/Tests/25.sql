SELECT MODEL178.is_mutagen, count(distinct MODEL178.model_id ) FROM MODEL MODEL178, ATOM T1008290410000  WHERE MODEL178.model_id=T1008290410000.model_id AND MODEL178.is_mutagen='F' group by MODEL178.is_mutagen;
