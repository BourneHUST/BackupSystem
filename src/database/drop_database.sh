#!/bin/sh
#
# shell script to drop catalog database
#
bindir=/usr/bin
db_name=catalog

if $bindir/mysql $* -f <<END-OF-DATA
DROP DATABASE ${db_name};
END-OF-DATA
then
   echo "Drop of ${db_name} database succeeded."
else
   echo "Drop of ${db_name} database failed."
fi
exit 0