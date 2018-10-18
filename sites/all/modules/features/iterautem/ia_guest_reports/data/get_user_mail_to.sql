--ACCESS=access content
SELECT uid, name, mail as mail_to, status
FROM {users}
WHERE uid=:current_user AND status=1